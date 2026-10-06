/* class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        unordered_map<int,int> arr;
        for(int i = 0; i < n; i++)
        {
            int x = nums[i];
            if(arr[x] > 0)
            {
                int index = arr[x] - 1;
                if(i-index <= k)
                    return true;
            }
            arr[x] = i + 1;
        }
        return false;
    }
}; */
/*
    Question: Contains Duplicate II — LeetCode 219

    Approach:
    - Use an unordered_map to store the most recent index of each number.
    - For each element, check whether it has appeared before.
    - If it has, calculate the distance between the current index
      and the previous index.
    - Return true if the distance is less than or equal to k.
    - Update the stored index to the current index.

    Time Complexity: O(n) expected
    Space Complexity: O(n)
*/