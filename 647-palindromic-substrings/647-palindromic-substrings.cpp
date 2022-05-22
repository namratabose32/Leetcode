class Solution {
public:
    int countSubstrings(string& s) {
       return recursive(s);
    }
    
    // 1. recursive
    // Time: O(n ^ 3)
    int recursive(string& s) {
        int count = 0;
        for(int i = 0; i < s.size(); ++i) {
            for(int j = i; j < s.size(); ++j) {
                count += helper(s, i, j);
            }
        }
        return count;
    }
    
    // return 1 if s[i..j] is palindromic, 0 otherwise.
    int helper(string& s, int i, int j) {
        if (i >= j) return 1;
        return s[i] == s[j] ? helper(s, i+1, j-1) : 0;
    }
};