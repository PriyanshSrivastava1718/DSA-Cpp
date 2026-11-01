/* class Solution {
public:
    bool validMountainArray(vector<int>& arr) 
    {
        int index;
        int n = arr.size();
        if(n<3)
            return false;
        if(arr[0]>=arr[1])
            return false;
        for(int i = 1;i<n-1;i++)
        {
            if(arr[i]>=arr[i+1])
            {
                index = i;
                break;
            }
        }    
        if(index==n-1||index == 0)
            return false;
        for(int i = index;i<n-1;i++)
        {
            if(arr[i]<=arr[i+1])
                return false;
        }
        return true;
    }
}; */
/*
    LeetCode 941 - Valid Mountain Array

    Approach:
    1. Check if the array has at least 3 elements.
    2. Ensure the array starts with an increasing sequence.
    3. Find the peak element.
    4. Ensure the peak is neither the first nor the last element.
    5. Traverse the remaining array and verify that it is strictly decreasing.
    6. Return true only if both increasing and decreasing sections exist.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/