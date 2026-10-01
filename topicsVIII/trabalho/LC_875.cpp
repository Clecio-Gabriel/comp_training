#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool KisValid(vector<int>& piles, int h, int k){

        long long int hours = 0;
        double dk = static_cast<double>(k);

        for(int i = 0; i < piles.size(); i++)
            hours += static_cast<long long int>( ceil( piles[i] / dk) );

        return hours<=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int k = r;
        int ret;

        while(l <= r){
            k = (l + r) / 2;

            if ( KisValid(piles, h, k) ){
                ret = k;
                r = k - 1;
            }
            else l = k + 1;
        }

        return ret;
    }

};
