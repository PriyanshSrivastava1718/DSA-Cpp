/* class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int last = -1;
        for(auto x : s)
        {
            int count = 0;
            for(int i = 0; i < t.length(); i++)
            {
                if(t[i] == x && last < i)
                {
                    last = i;
                    count++;
                    break;
                }
            }
            if(!count)
                return false;
        }
        return true;
    }
}; */
/*
Approach:
- Traverse each character of string s.
- Search for its occurrence in t after the previously
  matched position.
- If any character cannot be matched in order,
  return false.
- If all characters are matched, return true.

Time Complexity: O(|s| * |t|)
Space Complexity: O(1)
*/