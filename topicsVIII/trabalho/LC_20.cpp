#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> pilha;

        unordered_set<char> opening = {'(', '{', '['};
        unordered_map<char, char> closing = {{')', '('}, {'}', '{'}, {']', '['}};

        for (int i = 0; i < s.length(); i++){
            // cout << s[i] << '\n';
            if (opening.count(s[i]) == 1){
                pilha.push(s[i]);
            }
            else if (closing.count(s[i]) == 1){
                if (pilha.empty()) return false;
                if (closing[s[i]] == pilha.top()) pilha.pop();
                else return false;
            }

        }

        return pilha.size() == 0;
    }
};
