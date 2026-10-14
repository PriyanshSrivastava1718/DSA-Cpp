/* class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) 
    {
        int n = words.size();
        vector<int> rank(26);
        for (int i = 0; i < 26; i++) 
        {
            rank[order[i] - 'a'] = i;
        }

        for (int i = 0; i < n - 1; i++) 
        {
            string w1 = words[i];
            string w2 = words[i + 1];
            bool matched = false;
            int len = min(w1.size(), w2.size());
            for (int j = 0; j < len; j++) 
            {
                if (w1[j] != w2[j]) 
                {
                    if (rank[w1[j] - 'a'] > rank[w2[j] - 'a']) 
                    {
                        return false;
                    }
                    matched = true;
                    break;
                }
            }
            if (!matched && w1.size() > w2.size()) 
            {
                return false;
            }
        }
        return true;
    }
}; */
/*
    Algorithm:
    1. Create a rank array of size 26 to store the priority of each
       character according to the alien dictionary's custom order.
    2. Traverse the order string and assign each character its
       corresponding rank.
    3. Iterate through every pair of adjacent words in the words array.
    4. Compare the characters of both words up to the length of the
       shorter word.
    5. If the characters differ, compare their ranks:
       - If the first word's character has a greater rank, return false.
       - Otherwise, the pair is correctly ordered, so stop comparing
         the current pair.
    6. If all compared characters match, check their lengths.
       If the first word is longer than the second, return false because
       a longer word cannot precede its own prefix.
    7. If all adjacent pairs satisfy the alien dictionary order,
       return true.

    Time Complexity: O(n * m + 26)
    Space Complexity: O(1)

    Where n is the number of words and m is the maximum length of a word.
*/