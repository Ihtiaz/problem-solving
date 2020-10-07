/// Problem-link: https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> indices;
        unordered_map <int, int> hit;
        for (int i=0; i<nums.size(); i++) {
            hit[nums[i]] = i;
        }
        for (int i=0; i<nums.size(); i++) {
            int need = target - nums[i];
            if (hit.find(need) != hit.end() && hit[need] != i) {
                indices.push_back(i);
                indices.push_back(hit[need]);
                break;
            }
        }
        return indices;
    }
};
