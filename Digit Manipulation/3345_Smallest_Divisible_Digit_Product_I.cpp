/* class Solution {
public:
    int smallestNumber(int n, int t) 
    {
        int p;
        while(true)
        {
            int save = n;
            p=1;
            while(save!=0)
            {
                int s = save%10;
                p = p * s;
                save/=10;
            }
            if(p%t==0)
            {
                return n;
            }
            else
                n++;
        }
    }
}; */
/*
Approach:
1. Start checking numbers from n and keep incrementing until a valid number is found.
2. For each number, extract its digits one by one using modulo 10.
3. Calculate the product of all its digits.
4. Check whether the digit product is divisible by t.
5. If divisible, return the current number.
6. Otherwise, increment the number and repeat the process.

Time Complexity: O(k * log n)
where k is the number of values checked before finding the answer.

Space Complexity: O(1)
*/