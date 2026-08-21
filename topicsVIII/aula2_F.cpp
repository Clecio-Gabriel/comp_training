#include <iostream>
#include <stack>
#include <string>

int main(){

    std::string inp;
    std::getline(std::cin >> std::ws, inp);

    std::stack <char> tower;
    for (auto ch : inp){
        if (tower.empty())
            tower.push(ch);
        else{
            if (tower.top() == ch){
                tower.pop();
            }
            else tower.push(ch);
        }
    }

    std::string ret;
    (tower.empty()) ? (ret = "Yes") : (ret = "No");
    std::cout << ret << '\n';
    

    return 0;
}