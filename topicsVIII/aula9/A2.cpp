#include <bits/stdc++.h>
using namespace std;

using matriz = vector < vector <int> > ;

int main(){
    int n;
    cin >> n;

    matriz input;
    int sum = 0;

    for (int i = 0; i < n; i++){
        input.push_back(vector<int>());
        for (int j = 0; j < n; j++){
            int aux;
            cin >> aux;
            input[i].push_back(aux);

            if ((i - j) == 0){
                sum += aux;
            }
            else if ((i + j) == (n - 1)){
                sum += aux;
            }
            else if (i == (n/2)){
                sum += aux;
            }
            else if (j == (n/2)){
                sum += aux;
            }
        }
    }

    cout << sum << endl;

    return 0;
}
