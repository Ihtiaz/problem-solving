///Problem-link: leetcode.com/problems/product-of-array-except-self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> ret(n+1);
        ret[n] = 1;
        for (int i=n-1; i>=0; i--) {
            ret[i] = ret[i+1] * nums[i];
        }
        int product = 1;
        for (int i=0; i<n; i++) {
            ret[i] = product * ret[i+1];
            product *= nums[i];
        }
        ret.pop_back();
        return ret;
    }
};
