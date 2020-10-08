/// leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1, area = (r-l) * min(height[l], height[r]);
        while (l < r) {
            if (height[l] < height[r]) l++;
            else r--;
            int cur = (r-l) * min(height[l], height[r]);
            area = max(area, cur);
        }
        return area;
    }
};
