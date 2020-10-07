///Problem-link: leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool hit[130] = {0};
        int n = s.length(), l = 0, r = 0, ans = 0;
        while (r < n) {
            if (hit[s[r]]) {
                while (l < r) {
                    if (s[l] == s[r]) {
                        l++;
                        break;
                    }
                    hit[s[l]] = false;
                    l++;
                }
            }
            ans = max(ans, r - l + 1);
            hit[s[r]] = true;
            r++;
        }
        return ans;
    }
};
