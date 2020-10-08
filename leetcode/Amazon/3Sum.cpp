///Problem-link: leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector <vector<int>> triplets;
        sort(nums.begin(), nums.end());
        for (int i=0; i<n-2; i++) {
            if (nums[i] > 0) break;
            int target = 0-nums[i];
            int l = i+1, r = n-1;
            while (l < r) {
                if (nums[l] + nums[r] == target) {
                    vector <int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    triplets.push_back(v);
                    int cur = nums[l];
                    while (l < r && nums[l] == cur) l++;
                    cur = nums[r];
                    while (l < r && nums[r] == cur) r--;
                }
                else if (nums[l] + nums[r] < target) l++;
                else r--;
            }
            int x = nums[i];
            while (i < n-2 && nums[i] == x) i++;
            i--;
        }
        return triplets;
    }
};
