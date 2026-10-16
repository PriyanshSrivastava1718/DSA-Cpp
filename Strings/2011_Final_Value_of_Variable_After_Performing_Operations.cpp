/* class Solution {
public:
    int finalValueAfterOperations(vector<string>& nums) 
    {
        int n = nums.size();    
        int ans = 0;
        for(auto x : nums)
        {
            int i = x.length();
            if(x[0]=='+' || x[i-1]=='+')
                ans++;
            else
                ans--;
        }
        return ans;
    }
}; */
/*
    Algorithm:
    1. Initialize ans = 0 to represent the initial value of the variable.
    2. Traverse each operation in the input vector.
    3. Check the first and last characters of the operation.
    4. If either character is '+', increment ans.
    5. Otherwise, decrement ans.
    6. Return ans after processing all operations.

    Time Complexity: O(n)
    Space Complexity: O(1)

    Where n is the number of operations.
*/