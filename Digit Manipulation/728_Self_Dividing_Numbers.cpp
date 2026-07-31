/* class Solution 
{
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector <int>arr;  //store ans
        for(int i=left;i<=right;i++)//i in range
        {
            int m = i;//save for comparing
            while(true)
            {
                int s = m % 10; //digit extraction
                if(s==0) //edge case
                    break;
                if(i % s != 0)  //check
                    break;
                m /= 10;
                if(m==0)
                {
                    arr.push_back(i);   //store ans
                    break;
                }
            }
        }
        return arr;
    }
}; */
/*
    ALGORITHM

    1. Traverse every number from left to right.

    2. Store the current number in a temporary variable.

    3. Extract every digit one by one.

    4. If any digit is 0 or does not divide the original number,
       stop checking that number.

    5. If all digits satisfy the condition,
       push the number into the answer vector.

    Time Complexity  : O((right-left+1) × Digits)
                      ≈ O(N)

    Space Complexity : O(1)

    Solution Type    : Brute Force
                       Simulation
                       Number Manipulation
                       Linear Traversal
*/