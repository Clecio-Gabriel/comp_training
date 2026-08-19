#include <iostream>

int main(){

    int t;
    std::cin >> t;

    int x, n;
    for (auto i{0}; i < t; i++){
        std::cin >> x >> n;
        if ((n % 2) != 0)
            std::cout << x << '\n';
        else
            std::cout << 0 << '\n';
    }

    return 0;
}