#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkSubStr(const string &inp, int l, int r){
        while (l < r){
            if (inp[l++] == inp[r--]) continue;
            else return false;
        }

        return true;
    }

    bool validPalindrome(string s) {
        int r = s.length() - 1;
        bool can_delete = true;

        for (int l = 0; l < r; l++, r--){
            if (s[l] == s[r]) continue;
            else{
                if (can_delete){
                    int substr_size = r - l;

                    // [ 1 ] check if, by deleting the right one, it keeps
                    //       being a palindrome
                    if ( checkSubStr(s, l, r-1) ) r--;
                    // [ 2 ] check if, by deleting the left one, it keeps
                    //       being a palindrome
                    else if ( checkSubStr( s, l+1, r) ) l++;
                    // [ 3 ] if none of it return true, it false by all means
                    else return false;

                    can_delete = false;
                }
                else return false;
            }
        }

        return true;

    }
};
