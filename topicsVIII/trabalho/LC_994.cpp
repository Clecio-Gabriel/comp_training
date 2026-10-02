#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int n;
    int m;
    int freshies;

    /*
     *  blank -> 0
     *  fresh -> 1
     *  rotten -> 2
     */

public:

    void preparation(vector<vector<int>>& grid, queue < pair <int, int> >& rotties){
        m = grid.size();
        n = grid[0].size();
        freshies = 0;

        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (grid[i][j] == 1) freshies++;
                else if (grid[i][j] == 2) rotties.push({i, j});
            }
        }

    }

    void multipleBFS(vector<vector<int>>& grid, queue < pair <int, int> >& rotties, int curr_queue){
        for (int k = 0; k < curr_queue; k++){
            auto ij = rotties.front();
            rotties.pop();
            int i = ij.first; int j = ij.second;

            // [ 1 ] i - 1, j -> Cima
            if ((i - 1) >= 0){
                if (grid[i - 1][j] == 1){
                    grid[i - 1][j] = 2;
                    rotties.push({i - 1, j});
                    freshies--;
                }
            }

            // [ 2 ] i + 1, j -> Baixo
            if ((i + 1) < m){
                if (grid[i + 1][j] == 1){
                    grid[i + 1][j] = 2;
                    rotties.push({i + 1, j});
                    freshies--;
                }
            }

            // [ 3 ] i, j - 1 -> Esquerda
            if ((j - 1) >= 0){
                if (grid[i][j - 1] == 1){
                    grid[i][j - 1] = 2;
                    rotties.push({i, j - 1});
                    freshies--;
                }
            }

            // [ 4 ] i, j + 1 -> Direita
            if ((j + 1) < n){
                if (grid[i][j + 1] == 1){
                    grid[i][j + 1] = 2;
                    rotties.push({i, j + 1});
                    freshies--;
                }
            }

        }
    }

    int orangesRotting(vector<vector<int>>& grid) {
        queue < pair <int, int> > rotties;
        preparation(grid, rotties);

        int time = 0;

        // After preparation, we'll do the multiple BFS
        while ((not rotties.empty()) and (freshies > 0)){
            int curr_queue = rotties.size();

            multipleBFS(grid, rotties, curr_queue);

            time++;

        }


        int ret = (freshies == 0) ? (time) : (-1);
        return ret;

    }
};
