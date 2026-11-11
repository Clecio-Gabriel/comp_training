#include <bits/stdc++.h>
using namespace std;

using matriz = vector < vector <char> >;

int main(){

    int n;
    cin >> n;

    matriz input;

    for (int i = 0; i < n; i++){
        input.push_back(vector<char>());
        for (int j = 0; j < n; j++){
            char aux;
            cin >> aux;
            input[i].push_back(aux);
        }
    }

    int count = 0;

    return 0;
}
