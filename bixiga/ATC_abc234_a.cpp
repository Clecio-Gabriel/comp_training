#include <iostream>

int f(int x){
    return (x*x) + 2*x + 3;
}

int main(){

    int t;
    std::cin >> t;

    std::cout << f(f(f(t) + t) + f(f(t))) << '\n';

    return 0;
}