#include <iostream>
#include <unordered_map>

int main(){

    int t;
    std::cin >> t;

    for (int i{0}; i < t; i++){
        int n;
        std::cin >> n;

        int ret{-1};
        std::unordered_map <int, int> input;
        for (int j = 0; j < n; j++){
            int aux{0};
            std::cin >> aux;
            
            if (input.count(aux) == 0){
                input.insert({aux, 1});
            }
            else{
                input[aux] += 1;
                if (input[aux] == 3){
                    ret = aux;
                }
            }
        }

        std::cout << ret << '\n';

    }

    return 0;
}