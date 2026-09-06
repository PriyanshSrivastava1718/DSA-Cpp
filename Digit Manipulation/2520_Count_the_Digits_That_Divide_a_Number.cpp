class Solution {
public:
    int countDigits(int num) 
    {
        int x = num;
        int count = 0;
        while(x!=0)
        {
            int digit = x%10;
            if(num%digit==0)
            {
                count++;
            }
            x/=10;
        }
        return count;
    }
};
/*
    Question Type: Math / Digit Manipulation

    Approach:
    Extract each digit of the number one by one and check whether
    the original number is divisible by that digit.

    1. Store the original number separately.
    2. Extract the last digit using % 10.
    3. Check whether the original number is divisible by the digit.
    4. If divisible, increment the count.
    5. Remove the last digit using / 10.
    6. Continue until all digits have been processed.

    Repeated digits are checked separately because each occurrence
    of a digit counts independently.

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/