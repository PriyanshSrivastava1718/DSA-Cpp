/* class Solution {
public:
    string reorganizeString(string s) 
    {
        int n = s.length();
        int hash[26] = {0};
        for(auto x:s)
        {
            hash[x-'a']++;
        }
        int maxi = INT_MIN;
        char maxchar;
        for(int i = 0;i<26;i++)
        {
            if(hash[i]>maxi)
            {
                maxi = hash[i];
                maxchar = i+'a';
            }
        }
        string ans = "";
        int index = 0;
        while(maxi!=0&&index<n)
        {
            s[index] = maxchar;
            maxi--;
            index+=2;
        }
        if(maxi!=0)
            return "";
        else
        {
            hash[maxchar - 'a'] = 0;
            for(int i = 0;i<26;i++)
            {
                while(hash[i]>0)
                {
                    index = index>=n?1:index;
                    s[index] = i+'a';
                    hash[i]--;
                    index+=2;
                }
            }
        }
        return s;
    }
}; */
/*
LeetCode 767: Reorganize String

Approach: Greedy + Frequency Counting + Alternate Index Placement

1. Count the frequency of each character using a hash array
   of size 26.
2. Find the character with the maximum frequency.
3. Place all occurrences of that character at even indices
   (0, 2, 4, ...) to keep them separated.
4. If all occurrences cannot be placed within the string,
   return an empty string.
5. Set the frequency of the maximum-frequency character to
   zero so it is not placed again.
6. Place the remaining characters into the available positions,
   continuing through even indices and then switching to odd
   indices when necessary.
7. Return the reorganized string.

Time Complexity: O(n) — counting frequencies and placing
                 all characters takes linear time.
Space Complexity: O(1) auxiliary space — the frequency array
                  has a fixed size of 26.
*/