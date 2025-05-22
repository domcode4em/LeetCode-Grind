/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets. Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 
Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false

Example 4:
Input: s = "([])"
Output: true
*/

class Solution {
public:
    bool isValid(string s) {
        if(s[0] == ']' || s[0] == ')' || s[0] == '}')
        {
            return false;
        }
        stack<char> myStack;
        // loop through the string to match parenthesis
        for(int i = 0; i < s.size(); i++)
        {
            // keep track of symbol order using stack FILO
            if(s[i] == '(')
            {
                myStack.push(')');
            }
            else if(s[i] == '[')
            {
                myStack.push(']');
            }
            else if(s[i] == '{')
            {
                myStack.push('}');
            }

            if(!myStack.empty() && s[i] == myStack.top())
            {
                myStack.pop();
            }
            else if(s[i] == ']' || s[i] == ')' || s[i] == '}')
            {
                return false;
            }
        }
        if(myStack.empty())
        {
            return true;
        }
        return false;;
    }
};
