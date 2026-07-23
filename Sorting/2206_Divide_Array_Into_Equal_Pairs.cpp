//approach 1 by sorting
/* 
algorithm = sort the given array
            start a counter (count each pair)
            for loop (i=0 -> n-1)
            count size of each number 
            if(count== even)
                count = 1 (count for next number)
            else
                return false
            if loop ends return true
time complexity = O(nlogn)
space complexity = O(1)
*/
/* class Solution {
public:
    bool divideArray(vector<int>& nums) 
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());      //sort the array
        int count =1;       //counter
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])      
            {   
                count++;
            }
            else
            {
                if(count%2==0)      //frequency is even
                    count = 1;      //for next number
                else
                    return false;   //if count==odd return false
            }
        }
        return true;        //since all pairs are even in frequency
    }
};
*/