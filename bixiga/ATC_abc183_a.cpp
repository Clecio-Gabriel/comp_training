#include <iostream>

int main(){

    int x;
    std::cin >> x;

    if (x < 0)
        std::cout << 0;
    else
        std::cout << x;
    
    std::cout << '\n';

    return EXIT_SUCCESS;
}