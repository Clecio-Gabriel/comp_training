#include <bits/stdc++.h>
using namespace std;

void switch_b(bool& var){
    var = (var) ? false : true;
}

int main(){

    int n, m;
    cin >> n >> m;

    bool right = true;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            // do the logic here
            if (i % 2 == 0){
                cout << "#";
            }
            else{
                if (right){
                    if (j == (m - 1)) cout << "#";
                    else cout << ".";
                }
                else{
                    if (j == 0) cout << "#";
                    else cout << ".";
                }
            }
        }

        if (i % 2 != 0) switch_b(right);

        cout << endl;
    }

    return 0;
}
