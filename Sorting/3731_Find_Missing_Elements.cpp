/* class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans;

        sort(nums.begin(), nums.end());

        int i = 1;
        int temp = nums[0];

        while(temp != nums[n-1])
        {
            temp = temp + 1;

            if(temp == nums[i])
                i++;
            else
                ans.push_back(temp);
        }

        return ans;
    }
}; */

/*
Approach:
1. Sort the array so all elements are in increasing order.
2. Start from the smallest element and move one value at a time
until we reach the largest element.
3. Use pointer i to check whether the current value exists in nums.
4. If it exists, move i forward.
5. Otherwise, the value is missing, so add it to ans.
*/
