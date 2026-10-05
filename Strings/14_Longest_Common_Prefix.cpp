/* class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string ans = strs[0];
        int n = strs.size();
        int max = ans.length();
        for(int i = 1; i < n; i++)
        {
            string s = strs[i];
            int m = s.length();
            int length = 0;
            for(int j = 0; j < m && j < ans.length(); j++)
            {
                if(s[j] == ans[j])
                {
                    length++;
                }
                else
                {
                    break;
                }
            }
            max = min(max, length);
        }
        string x = strs[0];
        ans = "";
        for(int i = 0; i < max; i++)
        {
            ans += x[i];
        }
        return ans;
    }
}; */
/*
    Question: Longest Common Prefix — LeetCode 14

    Approach:
    - Use the first string as the reference string.
    - Compare every other string character-by-character with the reference.
    - Stop at the first mismatch or when either string ends.
    - Track the minimum matching prefix length across all strings.
    - Return that prefix from the first string.

    Time Complexity: O(n * m)
    Space Complexity: O(1) auxiliary
*/