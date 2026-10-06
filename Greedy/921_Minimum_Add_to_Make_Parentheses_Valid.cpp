/* class Solution {
public:
    int minAddToMakeValid(string s) 
    {
        int n = s.length();
        int cl=0;
        int cr=0;
        for(int i = 0;i<n;i++)
        {
            char x = s[i];
            if(x=='(')
            {
                cl++;
            }
            else
            {
                if(cl>0)
                    cl--;
                else
                    cr++;
            }
        }
        return cr+cl;
    }
}; */
/*
    Question: Minimum Add to Make Parentheses Valid — LeetCode 921

    Approach:
    - Traverse the string from left to right.
    - Track the number of unmatched opening brackets using cl.
    - When encountering ')':
        - Match it with an unmatched '(' if available.
        - Otherwise, count it as an unmatched closing bracket using cr.
    - At the end, all unmatched brackets require insertions.
    - Return cr + cl.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/
