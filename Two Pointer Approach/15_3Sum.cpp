/* class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<int> arr;
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n;i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            int s = i+1;
            int e = n-1;
            while(s<e)
            {
                long long sum =(long long) nums[i]+nums[s]+nums[e];
                if(sum==0)
                {
                    arr.push_back(nums[i]);
                    arr.push_back(nums[s]);
                    arr.push_back(nums[e]);
                    ans.push_back(arr);
                    arr.clear();
                    s+=1;
                    e-=1;
                    while(s < e && nums[s] == nums[s-1])
                        s++;
                    while(s < e && nums[e] == nums[e+1])
                        e--;
                }
                else if(sum<0)
                {
                    s+=1;
                }
                else
                    e-=1;
            }
        }
        return ans;
    }
}; */
/*
    Algorithm:
    1. Sort the input array in ascending order.
    2. Iterate through the array, fixing nums[i] as the first element of the triplet.
    3. Skip duplicate values of nums[i] to avoid repeated triplets.
    4. Initialize two pointers: s = i + 1 and e = n - 1.
    5. Calculate the sum of nums[i], nums[s], and nums[e].
    6. If the sum is 0:
       - Store the triplet in the answer.
       - Move both pointers inward.
       - Skip duplicate values at s and e.
    7. If the sum is less than 0, increment s to increase the sum.
    8. If the sum is greater than 0, decrement e to decrease the sum.
    9. Repeat until s >= e, then continue with the next i.
    10. Return the list of unique triplets.

    Time Complexity: O(n^2)
    Space Complexity: O(log n) auxiliary space for sorting,
                      excluding the output.

    Where n is the size of the input array.
*/