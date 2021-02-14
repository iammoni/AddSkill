/*
5676. Minimum Changes To Make Alternating Binary String

You are given a string s consisting only of the characters '0' and '1'. In one operation, you can change any '0' to '1' or vice versa.

The string is called alternating if no two adjacent characters are equal. For example, the string "010" is alternating, while the string "0100" is not.

Return the minimum number of operations needed to make s alternating.

 

Example 1:

Input: s = "0100"
Output: 1
Explanation: If you change the last character to '1', s will be "0101", which is alternating.
Example 2:

Input: s = "10"
Output: 0
Explanation: s is already alternating.
Example 3:

Input: s = "1111"
Output: 2
Explanation: You need two operations to reach "0101" or "1010".
 

Constraints:

1 <= s.length <= 104
s[i] is either '0' or '1'.

*/
//Solution:

class Solution {
public:
    int minOperations(string str) {
        if(str.length()==0) return 0;
        char even=str[0];
        char odd=even=='1'?'0':'1';
        int count=0;
        for(int i=1;i<str.length();i++){
            if(1&i && str[0]==str[i]) count++;
            if(i%2==0 && str[i]==odd) count++;
        }
        
        return count<(str.length()-count)?count:(str.length()-count);
        
    }
};