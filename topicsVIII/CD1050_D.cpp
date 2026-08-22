#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>

enum State{
    OFF = 0,
    ON,
};

int solve(std::vector<int>& vec);

int main(){

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++){
        // [ 1 ] get vec size and get vec input
        int n;
        std::cin >> n;

        std::vector<int> fields;
        for (int j = 0; j < n; j++){
            int aux;
            std::cin >> aux;
            fields.push_back(aux);
        }

        

    }

    return 0;
}

int solve(std::vector<int>& vec){
    int count{0};

    State lawnmower = OFF;
    std::sort(vec.begin(), vec.end());
    

    return count;
}