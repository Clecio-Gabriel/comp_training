#include <iostream>
#include <vector>
#include <utility>

int main(){

    int t;
    std::cin >> t;

    
    for (int i{0}; i < t; i++){
        int n{0};
        int m{0};
        std::cin >> n >> m;

        std::vector<int> nTimes = {};
        for (int j{0}; j < 2*n; j++){
            int aux{0};
            std::cin >> aux;
            nTimes.push_back(aux);
        }

        int points{0};
        int countMin{0};
        int currSide {0};
        for (size_t k{0}; k < nTimes.size(); k++){
            std::pair<int, int> min_side {nTimes[k], nTimes[++k]};
            
            if (countMin != (min_side.first - 1)){
                int sum = (min_side.first - 1 - countMin);
                countMin += sum;
                points += sum;
                if (currSide == 0 and (sum % 2 != 0))
                    currSide = 1;
                else if (currSide == 1 and (sum % 2 != 0))
                    currSide = 0;
            }
            
            if (countMin == (min_side.first - 1)){
                if (currSide != min_side.second){
                    points++;
                    countMin++;
                    (currSide == 0) ? (currSide = 1) : (currSide = 0);
                }
                else countMin++;
            }
            
        }

        int sum = m - countMin;
        points += sum;

        std::cout << points << '\n';

    }

    return 0;
}