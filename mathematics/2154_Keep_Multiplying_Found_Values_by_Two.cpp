/* class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) 
    {
        int n = nums.size();
        vector<int> arr(10001,0);
        for(auto x:nums)
        {   
            arr[x] = 1;
        }
        while(true)
        {
            if(arr[original] == 1)
            {
                original *= 2;
                continue;
            }
            break;
        }
        return original;
    }
}; */
/*
    Algorithm:
    1. Create a frequency/presence array of size 10001, initialized with 0.
    2. Traverse the nums array and mark each element's corresponding
       index as 1 to indicate its presence.
    3. Start an infinite loop to check whether the original value exists.
    4. If arr[original] equals 1, multiply original by 2 and continue
       checking the updated value.
    5. If original is not present in the array, break out of the loop.
    6. Return the final value of original.

    Time Complexity: O(n + M)
    Space Complexity: O(M)

    Where n is the number of elements in nums and M = 10001,
    the fixed size of the presence array.

    Since M is constant, the time complexity simplifies to O(n)
    and the space complexity to O(1).
*/