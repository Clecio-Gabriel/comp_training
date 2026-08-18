#include <iostream>
#include <vector>

using value_type = int;

int main(){

    value_type inp;
    std::cin >> inp;

    value_type diff;

    if (inp<40)
        diff = 40 - inp;
    else if (inp < 70)
        diff = 70 - inp;
    else if (inp < 90)
        diff = 90 - inp;
    else{
        std::cout << "expert\n";
        return EXIT_SUCCESS;
    }

    std::cout << diff << '\n';

    return EXIT_SUCCESS;
}