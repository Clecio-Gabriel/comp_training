#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    ll m;
    cin >> n >> m;

    vector<ll> numb(n);
    for (int i = 0; i < n; i++)
        cin >> numb[i];

    if (n > m){
        cout << 0 << endl;
        return 0;
    }

    ll prod = 1;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            prod *= abs(numb[i] - numb[j]) % m;
            prod %= m;
        }
    }
    cout << prod << endl;

    return 0;
}
