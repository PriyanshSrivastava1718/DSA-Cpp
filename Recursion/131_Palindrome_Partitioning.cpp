/* class Solution 
{
private:
    bool isPalindrome(string& s, int start, int end)
    {
        while(start < end)
        {
            if(s[start] != s[end])
                return false;

            start++;
            end--;
        }
        return true;
    }

    void solve(string& s, int start, vector<string>& path,
               vector<vector<string>>& ans)
    {
        if(start == s.length())
        {
            ans.push_back(path);
            return;
        }
        for(int i = start;i < s.length(); i++)
        {
            if(isPalindrome(s, start, i))
            {
                path.push_back(s.substr(start, i - start + 1));
                solve(s, i + 1, path, ans);
                path.pop_back();
            }
        }
    }

public:
    vector<vector<string>> partition(string s) 
    {
        vector<vector<string>> ans;
        vector<string> path;
        solve(s, 0, path, ans);
        return ans;
    }
}; */
/*
LC 131 - Printing All Subarrays Using Recursion

Concept:
1. Generate subarrays by maintaining a starting index.
2. Explore possible ending positions.
3. Every subarray must contain contiguous elements.
4. Recursively move forward to generate the remaining subarrays.

Key Difference:
- Subarray: Contiguous elements.
- Subsequence: Elements maintain order but need not be contiguous.
- Subset: Order and contiguity do not matter.

Learning:
Understand recursive decisions and how the starting and ending
indices define a subarray.

*/