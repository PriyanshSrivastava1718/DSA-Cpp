/* 
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int element=0;    //store ans
        for(int i=0;i<nums.size();i++) //xor all element
        {
            element = element ^ nums[i]; //since a^a=0 therefore unique element remains
        }
        return element;
    }
};
*/
/* 
algorithm - element = 0
            for loop(0 to n)
            element ^= nums[i];
            return element
time complexity = O(n)
space complexity = O(1)
 */