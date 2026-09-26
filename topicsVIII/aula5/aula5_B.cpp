#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    //  starting will be == 0
    //  closing will be == 1
    vector< pair<int, int> > entries;
    for (int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;

        entries.push_back({l, 0});
        entries.push_back({r, 1});
    }

    sort(entries.begin(), entries.end());

    int curr = 0;

    for (int i = 0; i < entries.size(); i++){
        if (entries[i].second == 0) curr++;
        if (entries[i].second == 1) curr--;

        if (curr > 2){
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    return 0;
}
