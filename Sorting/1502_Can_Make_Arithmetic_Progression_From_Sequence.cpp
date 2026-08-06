/* class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        int diff = arr[1]-arr[0];
        int j =2,i=1;
        while(j<arr.size())
        {
            if(arr[j]-arr[i]!=diff)
                return false;
            else
            {
                i++;
                j++;
            }
        }    
        return true;
    }
}; */
/*
Approach:
1. Sort the array so the elements are arranged in increasing order.
2. Calculate the common difference using the first two elements.
3. Traverse the remaining elements and compare the difference
   between every pair of consecutive elements with the common difference.
4. If any difference is not equal, return false.
5. If all consecutive differences are equal, return true.

Time Complexity: O(n log n)
Space Complexity: O(1)
*/