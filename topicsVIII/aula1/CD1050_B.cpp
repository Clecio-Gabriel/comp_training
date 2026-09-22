#include <iostream>
#include <vector>

int main(){

    int t;
    std::cin >> t;

    int n, m, x, y;
    for (int i{0}; i < t; i++){
        std::cin >> n >> m >> x >> y;

        std::vector<int> nInts;
        std::vector<int> mInts;

        int aux;
        for (int j{0}; j < n; j++){
            std::cin >> aux;
            nInts.push_back(aux);
        }
        for (int j{0}; j < n; j++){
            std::cin >> aux;
            mInts.push_back(aux);
        }

        
    }

    return 0;
}