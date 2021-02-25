/*
Given a balanced parentheses string S, compute the score of the string based on the following rule:

() has score 1
AB has score A + B, where A and B are balanced parentheses strings.
(A) has score 2 * A, where A is a balanced parentheses string.
 

Example 1:

Input: "()"
Output: 1
Example 2:

Input: "(())"
Output: 2
Example 3:

Input: "()()"
Output: 2
Example 4:

Input: "(()(()))"
Output: 6
 

Note:

1. S is a balanced parentheses string, containing only ( and ).
2. 2 <= S.length <= 50

*/

class Solution {
public:
     int scoreOfParentheses(string S) {
        stack<int> s;
        s.push(0);
        for(char c:S){
            if(c=='('){
                s.push(0);
            }else{
             int a=s.top();s.pop();
             int b=s.top();s.pop();
             s.push(b+max(2*a,1));
                }
        }
        return s.top();
    }
};