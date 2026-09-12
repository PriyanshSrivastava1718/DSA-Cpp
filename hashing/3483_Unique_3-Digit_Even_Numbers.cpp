/*
    LeetCode: 3483 - Unique 3-Digit Even Numbers

    Approach:
    - Generate every possible 3-digit number using three different indices.
    - The first digit cannot be 0.
    - The last digit must be even.
    - Use an unordered_set to avoid counting duplicate numbers when digits repeat.

    Time Complexity: O(n^3)
    Space Complexity: O(n^3) in the worst case due to the set
*//* 
class Solution {
public:
    int totalNumbers(vector<int>& digits) 
    {
        int ans = 0;
        unordered_set<int> seen;

        for(int i = 0; i < digits.size(); i++)
        {
            if(digits[i] == 0)
                continue;

            int num = digits[i];

            for(int j = 0; j < digits.size(); j++)
            {
                if(j == i)
                    continue;

                int temp = num * 10 + digits[j];

                for(int k = 0; k < digits.size(); k++)
                {
                    if(k == i || k == j)
                        continue;

                    if(digits[k] % 2 != 0)
                        continue;

                    int x = temp * 10 + digits[k];

                    if(seen.find(x) != seen.end())
                        continue;

                    seen.insert(x);
                    ans++;
                }
            }
        }

        return ans;
    }
}; */