#include <bits/stdc++.h>
using namespace std;

int main(){

    string hello = "hello";
    auto cmp = hello.begin();

    string inp;
    getline(cin >> ws, inp);

    bool started = false;
    bool helloed = false;
    for(auto it = inp.begin(); it != inp.cend(); it++){
        if (*it == *cmp and (not started)){
            started = true;
            helloed = true;
        }
        if (started){

        }
    }

    string ret = (helloed) ? "YES" : "NO";
    cout << ret << endl;

    return 0;
}
