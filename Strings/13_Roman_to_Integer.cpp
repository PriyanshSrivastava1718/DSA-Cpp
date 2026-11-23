/* class Solution {
public:
    int romanToInt(string s) 
    {
        int n = s.length();
        unordered_map<char,int> m;
        int ans = 0;

        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        for(int i = 0; i < n; i++)
        {
            if(i + 1 < n && m[s[i]] < m[s[i+1]])
            {
                ans += m[s[i+1]] - m[s[i]];
                i++;
            }
            else
            {
                ans += m[s[i]];
            }
        }
        return ans;
    }
}; */
/*
LeetCode - 13. Roman to Integer

Approach:
1. Store Roman symbols and their integer values in an unordered_map.
2. Traverse the string from left to right.
3. If the current symbol is smaller than the next symbol,
   subtract the current value from the next value.
4. Increment the index to skip the already processed next symbol.
5. Otherwise, add the current symbol's value directly.

Time Complexity: O(n)
Auxiliary Space Complexity: O(1)

Concepts: Strings, Hash Maps, Greedy
*/