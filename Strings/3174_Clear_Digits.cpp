/* class Solution {
public:
    string clearDigits(string s) 
    {
        while(!s.empty())
        {
            if(s[0] >= '0' && s[0] <= '9')
            {
                s.erase(0,1);
                continue;
            }
            bool removed = false;
            int n = s.size();

            for(int i = 1; i < n; i++)
            {
                if(s[i] >= '0' && s[i] <= '9')
                {
                    s.erase(i-1,2);
                    removed = true;
                    break;
                }
            }
            if(!removed)
                break;
        }
        return s;
    }
}; */
/*
    Question Type: String Manipulation

    Approach:
    - Traverse the string while it is not empty.
    - If the first character is a digit, remove it.
    - Otherwise, search for the next digit in the string.
    - When a digit is found, remove that digit along with the
      character immediately before it.
    - Repeat until no digit remains that can be removed.
    - Return the resulting string.

    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/