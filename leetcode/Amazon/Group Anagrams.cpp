/// Problem-link: leetcode.com/problems/group-anagrams/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int mod = 1000000007;
        int primes[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103};
        unordered_map <long long, vector <string>> hit;
        int n = strs.size();
        for (int i=0; i<n; i++) {
            long long x = 1;
            for (int j=0; j<strs[i].length(); j++) x = (x * primes[strs[i][j]-'a']) % mod;
            hit[x].push_back(strs[i]);
        }
        vector <vector<string>> ret;
        for (auto v: hit) {
            ret.push_back(v.second);
        }
        return ret;
    }
};
