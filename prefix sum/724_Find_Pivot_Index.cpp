class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int n = nums.size();

        // Creating left prefix sum
        int lsum = nums[0];
        vector<int> lprefix;
        lprefix.push_back(lsum);

        for(int i = 1; i < n; i++)
        {
            lsum += nums[i];
            lprefix.push_back(lsum);
        }

        // Creating right prefix (suffix) sum
        vector<int> rprefix(n);

        int rsum = nums[n-1];
        rprefix[n-1] = rsum;

        for(int i = n-2; i >= 0; i--)
        {
            rsum += nums[i];
            rprefix[i] = rsum;
        }
        for(int i = 0; i < n; i++)
        {
            if(lprefix[i] == rprefix[i])
                return i;
        }

        return -1;
    }
};
/*
Approach: Prefix Sum + Suffix Sum

1. Create a prefix sum array where lprefix[i] stores
   the sum of elements from index 0 to i.
2. Create a suffix sum array where rprefix[i] stores
   the sum of elements from index i to n-1.
3. Traverse every index and compare lprefix[i] with rprefix[i].
4. If both are equal, the sums on the left and right of
   that index are equal, so return i.
5. If no such index exists, return -1.

Time Complexity: O(n)
Space Complexity: O(n)
*/