#include <iostream>
#include <utility>
#include <optional>
#include <unordered_map>

int main(){

    int n, x;
    std::cin >> n >> x;

    std::optional<std::pair <int, int>> ret;
    std::unordered_map<int, int> inp;
    for (int i = 0; i < n; i++){
        int aux;
        std::cin >> aux;

        int complement = x - aux;
        if (inp.count(complement) == 1){
            ret = {i + 1, inp[complement] + 1};
        }

        inp.insert({aux, i});
    }

    if (ret.has_value())
        std::cout << ret.value().first << ' ' << ret.value().second << '\n';
    else
        std::cout << -1 << '\n';

    return 0;
}