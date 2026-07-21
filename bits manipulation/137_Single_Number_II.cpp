/* 
class Solution 
{
public:
    int singleNumber(vector<int>& nums) 
    {
        int ans = 0;        //variable to store answer
        for(int bits = 0;bits<32;bits++)    //since an integer has 32 bits
        {
            int count = 0;  //counts number of 1 bits
            for(int i=0;i<nums.size();i++)  //check eeach number
            {
                if(((nums[i]>>bits)&1)==1)  //if nth bit is 1 or not
                {
                    count++;
                }
            }
            if(count%3 != 0)        //if number of 1 is not divisible by 3 
            {
                ans = ans | (1<<bits);  //add 1 bit at nth position for unique number
            }
        }
        return ans;
    }
};
*/
/* 
algorithm = for loop(bits =0 -> 31) 
            count = 0 
            for loop(i=0 -> nums.size()-1)
            check nth bit of each number is 1 or not
            if 1 then store in count 
            if count %3 != 0 (bit is 1)
            store in answer (at nth bit)
            return ans
time complexity = O(32*n) = O(n)  linear
space complexity = O(1) constant space
 */