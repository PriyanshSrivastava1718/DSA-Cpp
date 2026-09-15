/* class Solution {
public:
    string removeDuplicates(string s) 
    {
        int i = 1;
        int n = s.length();
        string ans = "";
        ans.push_back(s[0]);
        while(i<n)
        {
            int len = ans.length()-1;
            if(len<0)
                len++;
            if(s[i]!=ans[len])
            {
                ans.push_back(s[i]);
                i++;
            }
            else
            {
                ans.pop_back();
                i++;
            }
        }
        return ans;
    }
}; */
/*
    Question Type: Remove All Adjacent Duplicates In String

    Approach:
    - Use a string as a stack.
    - Traverse the input string character by character.
    - If the current character is different from the top of `ans`,
      push it into `ans`.
    - If it is the same as the top, remove the top character.
    - This automatically handles newly formed adjacent duplicates.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/