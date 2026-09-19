#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> bills = {100, 20, 10, 5, 1};
    auto it = bills.cbegin();

    int notes {0};
    while (it != bills.cend() and n > 0){
        int curr = *it;
        if (curr <= n){
            n -= curr;
            notes++;
        }
        else it++;
    }

    cout << notes << '\n';

    return 0;
}
