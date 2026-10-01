/* class Solution {
public:
    vector<int> findArray(vector<int>& pref) 
    {
        int n = pref.size();
        vector<int> ans(n);
        int pre = pref[0];
        ans[0] = pref[0];
        for(int i = 1;i<n;i++)
        {
            ans[i] = pref[i] ^ pre;
            pre = ans[i] ^ pre;
        }
        return ans;
    }
}; */
/*
    Question: Find The Original Array of Prefix XOR — LeetCode 2433

    Approach:
    - The first element of the original array is the first prefix XOR.
    - For every next element, XOR the current prefix with the previous prefix.
    - Common elements cancel because x ^ x = 0, leaving the original value.
    - Store the current prefix XOR for use in the next iteration.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/