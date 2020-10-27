/// Problem-link: leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0}, ret = -1;
        for (char c : s) freq[c-'a']++;
        for (int i=0; i<s.length(); i++) {
            if (freq[s[i]-'a'] == 1) {
                ret = i;
                break;
            }
        }
        return ret;
    }
};
