/*
    LeetCode: 3194 - Minimum Average of Smallest and Largest Elements

    Approach:
    - Sort the array.
    - Pair the smallest element with the largest element,
      then the second smallest with the second largest, and so on.
    - Calculate the average of each pair.
    - Return the minimum average found.

    Time Complexity: O(n log n)
    Space Complexity: O(n) for storing the averages
*/
/* 
class Solution {
public:
    double minimumAverage(vector<int>& nums) 
    {
        vector<double> averages;

        sort(nums.begin(), nums.end());

        int s = 0;
        int e = nums.size() - 1;

        while(s < e)
        {
            double x = (double(nums[s]) + double(nums[e])) / 2;
            averages.push_back(x);
            s++;
            e--;
        }

        double mini = INT_MAX;

        for(int i = 0; i < averages.size(); i++)
            mini = min(mini, averages[i]);

        return mini;
    }
}; 
*/