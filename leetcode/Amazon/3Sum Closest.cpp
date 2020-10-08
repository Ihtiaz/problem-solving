///Problem-link: leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int diff = INT_MAX, ans = -1;
        for (int i=0; i<n-2; i++) {
            int l = i+1, r = n-1;
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (abs(target-sum) < diff) {
                    ans = sum;
                    diff = abs(target-sum);
                }
                if (sum < target) l++;
                else r--;
            }
        }
        return ans;
    }
};
