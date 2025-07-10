/*
Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-2^31 <= x <= 2^31 - 1
 

Follow up: Could you solve it without converting the integer to a string?

*/

#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string org = std::to_string(x);
        std::string rvs = org;
        std::reverse(rvs.begin(), rvs.end());
        if (org == rvs)
            return true;
        else
            return false;
    }
};