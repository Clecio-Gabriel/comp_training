#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int explored[300][300];

public:
    void traverse( vector< vector<char> >& grid, int explored [300][300],
                   const pair < int, int >& start, int m, int n){

        stack < pair<int, int> > coordinates;
        coordinates.push(start);

        while (not coordinates.empty()){
            auto ij = coordinates.top();
            coordinates.pop();
            int i = ij.first; int j = ij.second;
            explored[i][j] = 1;

            // [ 1 ] i - 1, y -> Cima
            if ((i - 1) >= 0){
                if (grid[i - 1][j] == '1' and explored[i - 1][j] != 1)
                    coordinates.push({i - 1, j});
            }
            // [ 2 ] i + 1, j -> Baixo
            if ((i + 1) < m){
                if (grid[i + 1][j] == '1' and explored[i + 1][j] != 1)
                    coordinates.push({i + 1, j});
            }
            // [ 3 ] i, j - 1 -> Esquerda
            if ((j - 1) >= 0){
                if (grid [i][j - 1] == '1' and explored[i][j - 1] != 1)
                    coordinates.push({i, j - 1});
            }
            // [ 4 ] i, j + 1 -> Direita
            if ((j + 1) < n){
                if (grid [i][j + 1] == '1' and explored[i][j + 1] != 1)
                    coordinates.push({i, j + 1});
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int num_travels = 0;

        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (grid[i][j] == '1' and explored[i][j] == 0){
                    num_travels++;
                    auto start = pair{i, j};
                    traverse(grid, explored, start, m, n);
                    cout << endl;
                }
            }
        }

        return num_travels;
    }
};
