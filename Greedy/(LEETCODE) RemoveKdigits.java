/**
Solution to Remove K Digits at Leetcode in java

Ref:

Problem Description:
Given a non-negative integer num represented as a string, remove k digits from the number so that the new number is the smallest possible.

The length of num is less than 10002 and will be ≥ k.
The given num does not contain any leading zero.

Example 1:
Input: num = "1432219", k = 3
Output: "1219"

**/

public class Solution {
    public String removeKdigits(String num, int k) {
        
        int len = num.length();
        if(k==len)        
            return "0";
            
        Stack<Character> stack = new Stack<>();
        int i =0;
        while(i<num.length())
           {
                while(k>0 && !stack.isEmpty() && stack.peek()>num.charAt(i))
                {
                    stack.pop();
                    k--;
                }
                stack.push(num.charAt(i));
                i++;
            }
        
        while(k>0)
            {
                stack.pop();
                k--;            
            }
        
        StringBuilder sb = new StringBuilder();
        
        while(!stack.isEmpty())
            sb.append(stack.pop());
        
        sb.reverse();
        
        while(sb.length()>1 && sb.charAt(0)=='0')
            sb.deleteCharAt(0);
        return sb.toString();
    }
}
