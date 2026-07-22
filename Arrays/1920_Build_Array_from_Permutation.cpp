/* 
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) 
    {
        vector<int> arr;
        for(int i=0;i<nums.size();i++)      //array traversing 
        {
            int a = nums[nums[i]];
            arr.push_back(a);   //save ans
        }
        return arr;
    }
};
*/
/* 
time complexity = O(n)
space complexity = O(n)
 */