https://leetcode.com/problems/roman-to-integer/description/

/*
13. Roman to Integer
Solved
Easy
Topics
premium lock icon
Companies
Hint
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.
*/

#include <iostream>
#include <string>

class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        for (size_t i = 0; i < s.length(); ++i) {
            if (s[i] == 'I') {
                if (i+1 < s.length()) {
                    if (s[i+1] == 'V') {
                        num += 4;
                        ++i; // increase iterator
                    }
                    else if (s[i+1] == 'X') {
                        num += 9;
                        ++i; // increase iterator
                    }
                    else
                        num++;
                }
                else
                    num++;   
            }
            else if (s[i] == 'V') {
                num += 5;
            }
            else if (s[i] == 'X') {
                if (i+1 < s.length()) {
                    if (s[i+1] == 'L') {
                        num += 40;
                        ++i; // increase iterator
                    }
                    else if (s[i+1] == 'C') {
                        num += 90;
                        ++i; // increase iterator
                    }
                    else 
                        num += 10;
                }
                else
                    num += 10;
            }
            else if (s[i] == 'L') {
                num += 50;
            }
            else if (s[i] == 'C') {
                if (i+1 < s.length()) {
                    if (s[i+1] == 'D') {
                        num += 400;
                        ++i; // increase iterator
                    }
                    else if (s[i+1] == 'M') {
                        num += 900;
                        ++i; // increase iterator
                    }
                    else
                        num += 100;
                }
                else
                    num += 100;
            }
            else if (s[i] == 'D') {
                num += 500;
            }
            else if (s[i] == 'M') {
                num += 1000;
            }
        }

        return num;
    }
};