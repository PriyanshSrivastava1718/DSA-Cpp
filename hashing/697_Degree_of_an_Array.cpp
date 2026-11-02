/* class Solution {
public:
    int findShortestSubArray(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int,int> ans;
        unordered_map<int,int> first;
        unordered_map<int,int> last;
        for(int i = 0;i<n;i++)
        {
            ans[nums[i]]++;

            if(first.find(nums[i])==first.end())
                first[nums[i]] = i;

            last[nums[i]] = i;
        }
        int degree = 0;
        for(auto x:ans)
        {
            if(x.second>degree)
                degree = x.second;
        }
        int mini = n;
        for(auto x:ans)
        {
            if(x.second==degree)
            {
                int len = last[x.first]-first[x.first]+1;
                mini = min(mini,len);
            }
        }
        return mini;
    }
}; */
/*
    LeetCode 697 - Degree of an Array

    Approach:
    1. Use three unordered_maps:
       - ans: Stores the frequency of each element.
       - first: Stores the first occurrence index of each element.
       - last: Stores the last occurrence index of each element.

    2. Traverse the array:
       - Increment the frequency of each element.
       - Store its first occurrence if not already present.
       - Update its last occurrence every time it appears.

    3. Find the maximum frequency (degree) of the array.

    4. Traverse the frequency map again:
       - Consider only elements whose frequency equals the degree.
       - Calculate their subarray length using:
         last[element] - first[element] + 1
       - Update the minimum length.

    5. Return the minimum subarray length.

    Time Complexity: O(n) average
    Space Complexity: O(n)
*/