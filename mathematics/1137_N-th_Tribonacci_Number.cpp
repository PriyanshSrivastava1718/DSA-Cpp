class Solution {
public:
    int tribonacci(int n) 
    {
        int ans = 0;
        int x = 0;
        int y = 1;
        int z = 1;
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        else if(n==2)
            return 1;
        else
        {
            for(int i = 3;i<=n;i++)
            {
                ans = x+y+z;
                x = y;
                y = z;
                z = ans;
            }
            return ans;
        }
    }
};
/*
    Algorithm:
    1. Handle the base cases n = 0, 1 and 2.
    2. Initialize the first three Tribonacci numbers:
       0, 1 and 1.
    3. Start from the 3rd position and calculate the next
       number as the sum of the previous three numbers.
    4. Shift the values forward after every calculation.
    5. Return the final Tribonacci number.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/