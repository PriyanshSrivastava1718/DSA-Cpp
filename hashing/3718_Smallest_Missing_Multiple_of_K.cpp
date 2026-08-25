/* class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) 
    {
        unordered_set<int> a;
        for(int i =0;i<nums.size();i++)
        {
            a.insert(nums[i]);
        }
        int n = a.size();
        int x = k * (n+1);
        int p;
        for(int i = k;i<=x;i++)
        {
            if(i%k==0)
            {
                if(a.find(i) == a.end())
                {
                    return i;
                }
            }
        }
        return p;
    }
}; */
/*
    Algorithm:
    1. Store all elements of nums in an unordered_set to allow
       constant-time average lookup.
    2. There can be at most n distinct elements in the array.
    3. Consider the first n+1 multiples of k:
       k, 2k, 3k, ..., (n+1)k.
    4. By the Pigeonhole Principle, since there are only n elements
       in the array, at least one of these n+1 multiples must be missing.
    5. Traverse through these multiples and use the set to check
       whether each multiple exists.
    6. Return the first multiple that is not present in the set.

    Time Complexity: O(n) average
    Space Complexity: O(n)
*/