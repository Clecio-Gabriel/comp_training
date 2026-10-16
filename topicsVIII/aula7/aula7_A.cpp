#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector <int> bars;
    for (int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        bars.push_back(aux);
    }

    auto ptr_a = bars.begin();
    auto ptr_b = bars.end() - 1;

    int A_sum = *ptr_a;
    int B_sum = *ptr_b;

    int a = 0;
    int b = 0;

    while(ptr_a <= ptr_b){
        if (A_sum <= B_sum){
            a++;
            A_sum += *(++ptr_a);
        }
        else{
            b++;
            B_sum += *(--ptr_b);
        }
    }

    cout << a << ' ' << b << '\n';

    return 0;
}
