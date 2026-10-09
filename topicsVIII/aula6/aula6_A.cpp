#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> inp;
    for (int i = 0; i < 3; i++){
        int aux;
        cin >> aux;
        inp.push_back(aux);
    }

    sort(inp.begin(), inp.end());

    int distance = 0;
    distance += inp[2] - inp[0];

    cout << distance << '\n';

    return 0;
}
