/* class Solution {
public:
    string reverseStr(string st, int k) 
    {
        int n = st.length();
        for(int i = 0; i < n; i += 2*k)
        {
            int s = i;
            int e = min(i + k - 1, n - 1);   
            reverse(st.begin() + s, st.begin() + e + 1);
        }
        return st;
    }
}; */
/*
LeetCode 541: Reverse String II

Approach: Two Pointers + STL reverse()

1. Traverse the string in blocks of 2*k characters.
2. Reverse the first k characters of every block.
3. Leave the next k characters unchanged.
4. Use min(i + k - 1, n - 1) to ensure the ending index
   never exceeds the string boundaries.
5. Increment i by 2*k to process the next block.

Time Complexity: O(n)
Space Complexity: O(1) Auxiliary Space
*/