#include <iostream>
#include <string>
#include <unordered_set>

int main(){

    int t{0};
    std::cin >> t;

    for (int i = 0; i < t; i++){
        int n{0};
        std::cin >> n;

        std::unordered_set<char> checker = {'T', 'i', 'm', 'u', 'r'};
        bool isValid {true};
        if (n != 5) isValid = false;

        std::unordered_set <char> input;
        for (int j = 0; j < n; j++){
            char aux;
            std::cin >> aux;
            if (input.count(aux) != 0){
                isValid = false;
            }
            else{
                if (checker.count(aux) == 0)
                    isValid = false;
                input.insert(aux);
            }
        }

        std::string ret;
        (isValid) ? (ret = "YES") : (ret = "NO"); 

        std::cout << ret << '\n';

    }

    return 0;
}