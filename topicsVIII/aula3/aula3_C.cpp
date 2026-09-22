#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(){

    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;

        unordered_map<int, int> sticks;
        for (int j = 0; j < n; j++){
            int aux;
            cin >> aux;

            if (sticks.count(aux) == 0)
                sticks.emplace(aux, 1);
            else
                sticks[aux]++;
        }

        int polygons = 0;
        if (n >= 3){
            for (auto it = sticks.cbegin(); it != sticks.cend(); it++){
                // cout << it->second << '\n';
                double sum = static_cast<double>(it->second) / 3;
                polygons += static_cast<int>(sum);
            }
        }

        cout << polygons << '\n';

    }

    return 0;
}
