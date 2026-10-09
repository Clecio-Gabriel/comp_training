#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector <int> bars;
    for (int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        bars.push_back(aux);
    }

    if (n == 1){
        cout << 1 << ' ' << 0 << endl;
        return 0;
    }
    if (n == 2){
        cout << 1 << ' ' << 1 << endl;
        return 0;
    }

    int l = 0; int r = n - 1;
    while ((l + 1) != r){

        if (bars[l] == bars[r]){
            bars[l++] = 0;
            bars[r] = 0;
        }
        else if (bars[l] < bars[r]){
            bars[r] -= bars[l];
            bars[l++] = 0;
        }
        else if (bars[r] < bars[l]){
            bars[l] -= bars[r];
            bars[r--] = 0;
        }

    }

    cout << ++l << ' ' << ++r << endl;

    return 0;
}
