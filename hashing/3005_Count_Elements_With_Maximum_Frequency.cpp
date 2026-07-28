/* class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        unordered_map<int, int> arr;
        for(int i = 0; i < nums.size(); i++)
        {
            arr[nums[i]]++;
        }
        int max = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            if(arr[nums[i]] > max)
            {
                max = arr[nums[i]];
            }
        }       int freq = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(arr[nums[i]] == max)
            {
                freq++;
            }
        }    
        return freq;
    }
}; */
/*
Algorithm: Hash Map

Approach:

- Store the frequency of each element using an unordered_map.
- Traverse the hash map to find the maximum frequency.
- If a larger frequency is found:
    - Update the maximum frequency.
    - Reset the answer to this frequency.
- If another element has the same maximum frequency:
    - Add its frequency to the answer.
- Return the total frequency of all elements having the maximum frequency.

Time Complexity: O(n)

Space Complexity: O(n)
*/