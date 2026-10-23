/* class Solution {
public:
    bool isBalanced(string num) 
    {
        int s1=0;
        int s2=0;
        int n = num.length();
        int digit;
        for(int i = 0;i<n;i++)
        {
            if(i%2==0)
            {
                digit = num[i] - '0';
                s1+=digit;
            }
            else
            {
                digit = num[i] - '0';
                s2+=digit;
            }
        }
        return s1==s2;
    }
}; */
/*
Problem: 3340. Check Balanced String
Platform: LeetCode
Topic: Strings, Basic Programming

Approach:
1. Initialize two sums, s1 and s2, to 0.
2. Traverse the string and convert each character into its
   numeric digit by subtracting '0'.
3. Add digits at even indices to s1.
4. Add digits at odd indices to s2.
5. Return true if both sums are equal.

Time Complexity: O(n)
Auxiliary Space: O(1)

Key Learning:
Numeric characters can be converted into their integer values
by subtracting '0'. Alternating indices allow the digits to be
grouped and summed in a single traversal.
*/