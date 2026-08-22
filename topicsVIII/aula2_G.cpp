#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& vec);

int main(){

    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;

        vector <int> inp;
        for (int j = 0; j < n; j++){
            int aux;
            cin >> aux;
            inp.push_back(aux);
        }

        int result = solve(inp);
        cout << result << '\n';
    }

    return 0;
}

int solve(vector<int>& vec){
    int ret {0};
    
    auto slow {vec.begin()};
    auto fast {vec.begin() + 1};
    auto end {vec.end()};

    bool need_swap {false};
    bool only_once {true};

    while (slow != end){
        
        if (*slow != *fast){
            if (need_swap){
                iter_swap(slow, fast);
                need_swap = false;
            }
            slow = fast;
            fast++;
        }
        else{
            if (need_swap){
                need_swap = false;
                only_once = true;

                end--;
                iter_swap(fast, end);
            }
            else if (only_once){
                need_swap = true;
                only_once = false;
            }
            slow = fast;
            fast++;
        }

    }

    ret = static_cast<int>(distance(vec.begin(), end));

    return ret;
}