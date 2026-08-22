class Solution {
public:
    bool checkDivisibility(int n) 
    {
        int x = n;
        int sum=0,product=1;
        while(x!=0)
        {
            int digit  = x%10;
            sum = sum+digit;
            product  = product * digit;
            x /= 10;
        }
        int d = sum+product;
        if(n%d==0)
            return true;
        return false;
    }
};
/*
    Algorithm:
    1. Extract each digit of n using % 10.
    2. Calculate the sum of all digits.
    3. Calculate the product of all digits.
    4. Add the sum and product to get d.
    5. Check whether n is divisible by d.

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/