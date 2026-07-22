/* class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>arr;    //vector array for output
        int p=-1,q=-1;
        int s=0,e=nums.size()-1;   //start,end (binary search logic)
        int m;
        while(s<=e)     //left index of a number
        {
            m = s + (e-s)/2;     //mid index
            if(nums[m]==target)
            {
                p = m;      //no break instead save first index
                e = m - 1;      
            }
            else if (nums[m]>target)
            {
                e = m - 1;
            }
            else 
            {
                s = m + 1;
            }
        }
        arr.push_back(p);       //pushes left index
        s=0,e = nums.size()-1;
        while(s<=e)     //right index of a number
        {
            m = s + (e-s)/2;
            if(nums[m]==target)
            {
                q = m;      //no break instead save last index
                s = m + 1;
            }
            else if (nums[m]>target)
            {
                e = m - 1;
            }
            else 
            {
                s = m + 1;
            }
        }
        arr.push_back(q);            //pushes right index
        return arr;
    }
}; */
/* 
algorithm = normal binary search but instead of break run whole loop
            define start and end variable 
            run 2 loops 1 for left index and other for right
            while condition-(s<=e)
            if found save that index and continue
            push that index in a new array
            return new array
time complexity = O(log n)
space complexity = O(1)
*/
