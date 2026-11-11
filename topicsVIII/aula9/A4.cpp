#include <bits/stdc++.h>
using namespace std;

using matriz = vector < vector<char> >;

int main(){

    int n, m;
    cin >> n >> m;

    matriz input;

    for (int i = 0; i < n; i++){
        input.push_back(vector<char>());
        for (int j = 0; j < m; j++){
            char aux;
            cin >> aux;
            input[i].push_back(aux);
        }
    }

    //algorithm
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            auto check = input[i][j];
            if (check == 'S'){

                int di [4] = {1, -1, 0, 0};
                int dj [4] = {0, 0, 1, -1};

                for (int k = 0; k < 4; k++){
                    pair <int, int> ij = {i + di[k], j + dj[k]};

                    if (ij.first < 0 or ij.first > (n - 1)) continue;
                    if (ij.second < 0 or ij.second > (m - 1)) continue;

                    auto check_inp = input[ij.first][ij.second];

                    if (check_inp == 'W'){
                        cout << "NO\n";
                        return 0;
                    }
                    else if (check_inp != 'S')
                        input[ij.first][ij.second] = 'D';
                }

            }
        }
    }

    //print
    cout << "Yes\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << input[i][j];
        }
        cout << endl;
    }

    return 0;
}
