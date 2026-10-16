#include <bits/stdc++.h>
using namespace std;

bool Kexists(const vector<int>& inp);

int main(){

    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<int> mov(n);
        for (int j = 0; j < n; j++)
            cin >> mov[j];

        if (Kexists(mov)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}

bool Kexists(const vector<int>& inp){
    auto tam = inp.size();
    if (tam % 2 != 0) return false;

    int s_even = 1000000000;
    int b_odd = 0;

    // check if S_even > K > B_odd
    int j = 1;
    for (int i = 0; j < tam; i+=2, j+=2){
        if (inp[i] < s_even) s_even = inp[i];
        if (inp[j] > b_odd) b_odd = inp[j];
    }

    if (b_odd >= s_even or (b_odd + 1) == s_even)
        //they cant be consecutive as well, as we're considering integers
        return false;
    return true;
}
