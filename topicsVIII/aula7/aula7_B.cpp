#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    vector<int> books(n);
    for (int i = 0; i < n; i++) cin >> books[i];

    int sum_min = 0;
    int b_count = 0;
    int l = 0; int r = n - 1;
    while (l <= r){
        if (sum_min >= m or (sum_min + 1) == m) break;

        if (books[l] <= books[r]){
            sum_min += books[l++];
            b_count++;
        }
        else if (books[r] < books [l]){
            sum_min += books[r--];
            b_count++;
        }
    }

    cout << b_count << endl;

    return 0;
}
