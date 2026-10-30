/* class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) 
    {
        int ans = 0;
        vector<int> arr(51,0);
        for(int i = 0;i<nums.size();i++)
        {
            arr[nums[i]]++;
        }
        for(int i = 0;i<51;i++)
        {
            if(arr[i]==2)
                ans ^= i;
        }
        return ans;
    }
}; */
/*
LeetCode 3158 - Find the XOR of Numbers Which Appear Twice

Approach:
1. Create a frequency array of size 51 since the given
   constraints limit the elements to the range [1, 50].
2. Traverse the input array and increment the frequency
   of each number.
3. Traverse the frequency array.
4. If a number appears exactly twice, XOR its value
   with the answer.
5. Return the final XOR.

Time Complexity: O(N + 50) = O(N)
Space Complexity: O(1) - Fixed-size frequency array.
*/