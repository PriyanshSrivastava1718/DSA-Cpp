/* class Solution {
public:
    int arrayPairSum(vector<int>& nums) 
    {
        int sum = 0;
        int mina;
        sort(nums.begin(),nums.end());  //sort the given array
        for(int i=0;i<nums.size();i+=2)     //traverse the sorted array
        {
            mina = min(nums[i],nums[i+1]);      //pairing
            sum += mina;
        }
        return sum;
    }
}; */
/*
Algorithm: Sorting 
Approach:
- Sort the array.
- Pair adjacent elements.
- Add the first element of every pair to the answer.
- Since the array is sorted, the first element of each pair
  is always the minimum.
Time Complexity: O(n log n)
Space Complexity: O(1)
*/