/* class Solution {
public:
    int firstUniqChar(string s) 
    {
        vector<int> arr(26,0);
        for(auto x:s)
        {
            int p = x-'a';
            arr[p]++;
        }
        char t;
        for(int i = 0;i<s.length();i++)
        {
            char x = s[i];
            if(arr[x-'a']==1)
                return i;
        }
        return -1;
    }
}; */
/*
LeetCode 387 - First Unique Character in a String

Approach:
1. Create a frequency array of size 26, initialized with zeros.
2. Traverse the string and calculate the frequency of each character
   using the index: character - 'a'.
3. Traverse the string again in its original order.
4. For each character, check its frequency in the array.
5. If its frequency is 1, return its index.
6. If no unique character exists, return -1.

Time Complexity: O(N)
    - First traversal builds the frequency array.
    - Second traversal finds the first unique character.

Space Complexity: O(1)
    - The frequency array always contains exactly 26 elements.

Key Concepts:
- Frequency Counting
- Character-to-Index Mapping
- Array Traversal
- Constant Auxiliary Space
*/