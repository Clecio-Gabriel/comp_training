#include <iostream>
#include <string>
#include <stack>

int main(){

    std::string inp;
    std::getline(std::cin >> std::ws, inp);
    
    std::stack <char> tower;
    for (auto ch : inp){
        if (ch == '(') 
            tower.push(ch);
        else if (ch == ')' and not tower.empty()){
            tower.pop();
        }
        else{
            std::cout << "NO\n";
            return 0;
        }
    }

    if (tower.empty())
        std::cout << "YES\n";
    else
        std::cout << "NO\n";

    return 0;
}