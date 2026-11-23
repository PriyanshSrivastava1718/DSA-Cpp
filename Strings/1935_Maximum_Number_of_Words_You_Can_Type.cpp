/* class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) 
    {
        int count  = 0;
        int n = text.length();
        int x = 0;
        for(int i = 0;i<n+1;i++)
        {
            if(brokenLetters.find(text[i])!=string::npos)
            {
                x++;
            }
            if(text[i]==' ' || text[i]=='\0')
            {
                if(x>0)
                    x = 0;
                else
                    count++;
            }
        }
        return count;
    }
}; */
/*
LeetCode - 1935. Maximum Number of Words You Can Type

Approach:
1. Traverse the input string character by character.
2. Check whether each character exists in brokenLetters.
3. Maintain a counter x for broken characters in the current word.
4. At every space or end of string:
   - If x > 0, skip counting the word and reset x.
   - Otherwise, increment the valid word count.

Time Complexity: O(n * b)
Auxiliary Space Complexity: O(1)

Concepts: Strings, String Traversal, Linear Search
*/