#include <bits/stdc++.h>
using namespace std;

int bin_search(const vector<int>& inp, int target);

int main(){

    int n;
    cin >> n;

    vector<int> prices;
    for (int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        prices.push_back(aux);
    }

    sort(prices.begin(), prices.end());

    int q;
    cin >> q;

    for (int i = 0; i < q; i++){
        int money;
        cin >> money;

        cout << bin_search(prices, money) << '\n';
    }
    

    return 0;
}

int bin_search(const vector<int>& inp, int target){

    int l = 0;
    int r = inp.size() - 1;
    int mid {0};

    if (target >= inp[r])
        return r + 1;

    if (target < inp[l])
        return 0;

    while (l + 1 != r){
        mid = (l + r) / 2;

        if (inp[mid] <= target) l = mid;
        else r = mid;
    }

    return r;

}