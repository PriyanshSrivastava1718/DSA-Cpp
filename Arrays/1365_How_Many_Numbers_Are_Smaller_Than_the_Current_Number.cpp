/* class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        vector<int>arr;
        int count  = 0;
        for(int i = 0;i<nums.size();i++)
        {
            count =0;
            for(int j = 0;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                    count ++;
            }
            arr.push_back(count);
        }
        return arr;
    }
}; */
/*
    Algorithm:
    1. Create an empty array to store the answer.
    2. For every element, compare it with every other element in the array.
    3. If the current element is greater than another element, increase the count.
    4. Store the count for the current element in the answer array.
    5. Return the answer array.

    Time Complexity: O(n^2)
    Space Complexity: O(n)
*/  