/* 
class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) 
    {
        int n = nums.size();
        vector<int> rarr(n);
        rarr[n-1] = nums[n-1];
        for(int i = n-2;i>=0;i--)
        {
            rarr[i] = min(rarr[i+1],nums[i]);
        }
        vector<int> larr(n);
        larr[0]=nums[0];
        for(int i = 1;i<n;i++)
        {
            larr[i] = max(larr[i-1],nums[i]);
        }
        int ins;
        for(int  i = 0;i<n;i++)
        {
            ins = larr[i] - rarr[i];
            if(ins<=k)
            {
                return i;
            }
        }
        return -1;
    }
};
*/
/*
    Question Type: Array / Prefix Maximum / Suffix Minimum

    Approach:
    Build two auxiliary arrays:

    1. Suffix minimum array:
       rarr[i] stores the minimum value from index i to
       the end of the array.

    2. Prefix maximum array:
       larr[i] stores the maximum value from the beginning
       of the array up to index i.

    For each index i, calculate the instability as:

    instability = prefix maximum - suffix minimum

    If the instability is less than or equal to k, the
    current index is stable.

    Traverse from left to right and return the first stable
    index, since the problem asks for the smallest stable index.

    If no stable index exists, return -1.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/