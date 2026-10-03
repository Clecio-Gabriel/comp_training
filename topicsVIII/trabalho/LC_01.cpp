#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;

        unordered_map<int, int> input;

        for (int i = 0; i < nums.size(); i++){
            auto check = nums[i];
            auto complement = target - check;

            if (input.count(complement) == 1){
                ret = {i, input[complement]};
                break;
            }
            else input.emplace(check, i);
        }

        return ret;
    }
};
