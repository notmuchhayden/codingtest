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

-231 <= x <= 231 - 1
 

Follow up: Could you solve it without converting the integer to a string?

*/

class Solution {
public:
    bool isPalindrome(int x) {
        // 풀이 전략
        // 1. x 를 문자열로 변환하여 뒤집은 것과 비교하면 가능 하다.
        // 2. 문자열로 변환하지 않고 해결하는 방법
        //    => 숫자를 하나씩 분해하여 배열에 역으로 넣고, 자리수 만큼 
        //        곱셈을 하여 숫자를 재구축 한다. 그리고 그 결과와 처음값 x 를 비교한다.
    
    }
};