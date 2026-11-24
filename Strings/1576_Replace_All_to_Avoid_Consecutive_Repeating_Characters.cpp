/* class Solution {
public:
    string modifyString(string s) 
    {
        int n = s.length();

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '?')
            {
                for(char x = 'a'; x <= 'z'; x++)
                {
                    if((i == 0 || s[i-1] != x) &&
                       (i == n-1 || s[i+1] != x))
                    {
                        s[i] = x;
                        break;
                    }
                }
            }
        }
        return s;
    }
}; */
/*
Approach: Greedy

1. Traverse the string from left to right.

2. Whenever a '?' is encountered, iterate through
   lowercase characters from 'a' to 'z'.

3. Check whether the current character differs from
   both its left and right neighbours.

4. Handle boundary conditions separately:
   - If i == 0, there is no left neighbour.
   - If i == n-1, there is no right neighbour.

5. Replace '?' with the first valid character found.

6. Continue until all question marks are replaced.

Time Complexity: O(26 * n) = O(n)
Space Complexity: O(1) Auxiliary Space
*/