#include <bits/stdc++.h>
using namespace std;

vector<int>::iterator find_smaller(vector<int>& inp);

int main(){

    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;

        vector <int> candies;
        for (int j = 0; j < n; j++){
            int aux;
            cin >> aux;
            candies.push_back(aux);
        }

        auto smaller = find_smaller(candies);
        int smaller_val = *smaller;

        auto it = candies.begin();
        int eaten_cand = 0;
        while (it != candies.end()){
            if (it == smaller or *it == smaller_val){
                it++;
            }
            else eaten_cand += *it++ - smaller_val;
        }

        cout << eaten_cand << '\n';
    }

    return 0;
}

vector<int>::iterator find_smaller(vector<int>& inp){
    auto ret = inp.begin();
    auto runner = inp.begin() + 1;

    while (runner != inp.end()){
        if (*runner < *ret) ret = runner;
        runner++;
    }

    return ret;
}
