/* class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;  //3 biggest +ve numbers
        int min1 = INT_MAX, min2 = INT_MAX; //if 2 big numbers are negative 
        
        for (int n=0;n<nums.size();n++)
        {
            if (nums[n] >= max1)  //if biggest element 
            {
                max3 = max2;
                max2 = max1;
                max1 = nums[n];
            } 
            else if (nums[n] >= max2) //second largest
            {
                max3 = max2;
                max2 = nums[n];
            } 
            else if (nums[n] >= max3) //third largest
            {
                max3 = nums[n];
            }
            if (nums[n] <= min1)      //biggest -ve number
            {
                min2 = min1;
                min1 = nums[n];
            } 
            else if (nums[n] <= min2)     //second biggest -ve number
            {
                min2 = nums[n];
            }
        }
        return max(max1 * max2 * max3, min1 * min2 * max1); //at max 2 -ve number to make it +ve
    }
}; */
/*
Algorithm: Linear Traversal

Approach:

- Initialize three variables to store the
  largest, second largest and third largest numbers.

- Initialize two variables to store the
  smallest and second smallest numbers.

- Traverse the array from 0 to n-1.

- For every element:
    - Update the three maximum values by shifting
      the previous values whenever a larger element is found.
    - Update the two minimum values similarly whenever
      a smaller element is found.

- At the end, calculate:
    1. Product of the three largest numbers.
    2. Product of the largest number and the two smallest numbers.

- Return the maximum of the above two products.

Time Complexity: O(n)

Space Complexity: O(1)
*/