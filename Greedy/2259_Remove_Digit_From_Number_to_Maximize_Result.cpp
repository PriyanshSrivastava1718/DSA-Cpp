/* 
class Solution {
public:
    string removeDigit(string number, char digit) {
        int n = number.length();

        for(int i = 0; i < n; i++) {
            if(number[i] == digit) {
                if(i == n-1 || number[i+1] > digit) {
                    number.erase(i, 1);
                    return number;
                }
            }
        }
        if(number.size()==n)
        {
            for(int i = n-1;i>=0;i--)
            {
                if(number[i]==digit)
                {
                    number.erase(i,1);
                    return number;
                }
            }
        }
        return number;
    }
};
 */
/*
LeetCode 2259 - Remove Digit From Number to Maximize Result

Approach:
- Traverse the string from left to right.
- Find the first occurrence of digit whose next character
  is greater than digit.
- Remove that occurrence to maximize the resulting number.
- If no such occurrence exists, traverse backwards and
  remove the last occurrence of digit.

Time Complexity: O(N)
Auxiliary Space: O(1)
*/