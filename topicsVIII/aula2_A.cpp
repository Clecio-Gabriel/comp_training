#include <iostream>

int main(){

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++){
        int rating;
        int div;
        
        std::cin >> rating;

        if (rating >= 1900)
            div = 1;
        else if (rating >= 1600)
            div = 2;
        else if (rating >= 1400)
            div = 3;
        else
            div = 4;

        std::cout << "Division " << div << '\n';
    }

    return 0;
}