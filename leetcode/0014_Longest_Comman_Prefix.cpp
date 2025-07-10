//https://leetcode.com/problems/longest-common-prefix/description/

/*
14. Longest Common Prefix
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];
        for (string str : strs) {
            int len = min(res.size(), str.size());
            if (res.size() > len)
                res.erase(len);
            for (int i = 0; i < len; ++i) {
                if(res[i] != str[i]) {
                    res.erase(i);
                    break;
                }
            }
        }
        return res;
    }
};