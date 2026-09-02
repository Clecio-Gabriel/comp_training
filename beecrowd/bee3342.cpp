#include <bits/stdc++.h>

int main(){

    int n{0};
    std::cin >> n;

    int black{0};
    int white{0};

    if (n % 2 == 0) black = white = (n * n) / 2;
    else{
        
    }

    std::cout << black << ' ' << white << '\n';

    return 0;
}