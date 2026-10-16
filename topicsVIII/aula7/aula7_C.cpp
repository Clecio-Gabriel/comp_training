#include <bits/stdc++.h>
using namespace std;

int get_the_one(int ini_pos, unordered_map<int, int>& inp);

int main(){

    int n;
    cin >> n;

    unordered_map<int, int> reported;
    for (int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        reported.insert({i, aux});
    }

    vector<int> ret (n);
    for (int i = 0; i < n; i++){
        ret[i] = get_the_one(i, reported);
    }

    for (auto& num : ret){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

int get_the_one(int ini_pos, unordered_map<int, int>& inp){
    pair<int, int> ret = {ini_pos, inp[ini_pos]};
    for (int i = 0; i < inp.size(); i++){
        ret = {ret.second - 1, inp[ret.second - 1]};
    }


    return ret.first + 1;
}
