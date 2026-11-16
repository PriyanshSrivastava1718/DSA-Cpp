/* class Solution {
public:
    int mostWordsFound(vector<string>& sentences) 
    {
        int ans = INT_MIN;;
        for(auto x: sentences)
        {
            int count = 0;
            int n = x.length();
            for(int i = 0;i<=n;i++)
            {
                if(x[i]==' '||x[i]=='\0')
                {
                    count++;
                }
            }
            ans = max(ans,count);
        }
        return ans;
    }
}; */
/*
LeetCode 2114 - Maximum Number of Words Found in Sentences

Approach:
1. Traverse each sentence in the given vector.
2. Initialize count = 1 because every sentence has at least one word.
3. Traverse each character of the sentence.
4. Increment count whenever a space is encountered.
5. Update ans with the maximum word count.
6. Return the maximum count.

Observation:
Number of words = Number of spaces + 1

Time Complexity: O(N * L)
Space Complexity: O(1)

N = Number of sentences
L = Maximum length of a sentence

Concepts Used:
- Strings
- Nested Loops
- Character Traversal
- Maximum Element
*/