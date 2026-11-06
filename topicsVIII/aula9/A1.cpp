#include <bits/stdc++.h>
using namespace std;

int main(){

    pair<int, int> pos_one;

    int mat[5][5] = {0};
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            int aux;
            cin >> aux;
            mat[i][j] = aux;
            if (aux == 1)
                pos_one = {i, j};
        }
    }

    pair<int, int> mid = {2, 2};
    auto diff = abs(pos_one.first - mid.first) + abs(pos_one.second - mid.second);
    cout << diff << endl;

    return 0;
}
