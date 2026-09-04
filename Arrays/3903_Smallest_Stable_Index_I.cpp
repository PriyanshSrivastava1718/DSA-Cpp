/* class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) 
    {
        int n = nums.size();
        vector<int> maxx(n);
        vector<int> minn(n);
        int m = INT_MIN;
        int x = INT_MAX;
        int p;
        for(int i = 0;i<n;i++)
        {
            maxx[i]= max(m,nums[i]);
            m = maxx[i];
        }
        for(int i = n-1;i>=0;i--)
        {
            minn[i]= min(x,nums[i]);
            x = minn[i];
        }
        x=k+1;
        for(int i = 0;i<n;i++)
        {
            m = maxx[i]-minn[i];
            if(m<=k)
            {
                return i;
            }
        }
        return -1;
    }
}; */
/*
    Question Type: Array / Prefix Maximum / Suffix Minimum

    Approach:
    Build two auxiliary arrays:

    1. Prefix maximum array:
       Stores the maximum value from the beginning of the
       array up to the current index.

    2. Suffix minimum array:
       Stores the minimum value from the current index to
       the end of the array.

    For each index, calculate the instability score as:
    maximum value - minimum value.

    If the instability score is less than or equal to k,
    the current index is stable.

    Since the array is traversed from left to right, the
    first index satisfying the condition is the required
    first stable index.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/