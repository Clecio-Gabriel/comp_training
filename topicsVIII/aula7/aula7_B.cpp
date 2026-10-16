#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    vector<int> books(n);
    for (int i = 0; i < n; i++) cin >> books[i];

    int high_bcount = 0;
    int h = 0; int t;
    int sum_min, b_count;

    while (h < n){
        b_count = 0; sum_min = 0;
        t = h;
        if (high_bcount > (n - 1 - t)) break;
        while (t < n){
            int curr_val = books[t++];
            if ((sum_min + curr_val) > m) break;
            sum_min += curr_val;
            b_count++;
        }
        if (b_count > high_bcount)
            high_bcount = b_count;
        h++;
    }

    cout << high_bcount << endl;

    return 0;
}
