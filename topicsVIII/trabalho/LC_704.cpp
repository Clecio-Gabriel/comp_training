#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int mid = 0;

        // EDGE CASES
        if ((target > nums[r]) or (target < nums[l])) return -1;
        if (nums[l] == target) return l;
        if (nums[r] == target) return r;

        // INTERACTIVE CYCLE
        while ((l+1) != r){
            mid = (l + r) / 2;

            if (nums[mid] == target) return mid;
            if (nums[mid] < target) l = mid;
            if (nums[mid] > target) r = mid;
        }

        return -1;
    }
};
