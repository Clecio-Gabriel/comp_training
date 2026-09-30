#include <bits/stdc++.h>
using namespace std;

bool validPalindrome(string s) {
    auto left {s.begin()};
    auto right {s.end() - 1};

    while(left != right){
        if (*left == *right){
            left++; right--;
        }
        else{

        }
    }

    return true;
}

int main(){

    string inp;
    getline(cin >> ws, inp);

    string ret = (validPalindrome(inp)) ? "YES" : "NO";
    cout << ret << endl;

    return 0;
}
