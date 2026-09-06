//APPROACH 1 O(nlog n)
/* class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> ans(n+1);
        ans[0]=0;
        for(int i = 0;i<=n;i++)
        {
            int count = 0;
            int x=i;
            while(x!=0)
            {
                if(x&1==1)
                    count++;
                x=x>>1;
            }
            ans[i]=count;
        }
        return ans;
    }
}; */
/*
    Question Type: Bit Manipulation / Array

    Approach:
    For each number from 0 to n, count the number of set bits
    (1s) in its binary representation.

    1. Start with the current number i.
    2. Check its rightmost bit using bitwise AND with 1.
    3. If the bit is 1, increment the count.
    4. Right shift the number by 1 to remove the rightmost bit.
    5. Continue until all bits have been processed.
    6. Store the count for i in the answer array.

    Time Complexity: O(n log n)
    Space Complexity: O(n)
*/



// APPROACH 2 O(n)
/* class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> ans(n + 1);

        for(int i = 1; i <= n; i++)
        {
            ans[i] = ans[i / 2] + (i & 1);
        }

        return ans;
    }
}; */
/*
    Question Type: Bit Manipulation / Dynamic Programming

    Approach:
    Use the result of a previously calculated number to determine
    the number of set bits in the current number.

    Dividing a number by 2 removes its rightmost binary bit.

    Therefore:
    countBits(i) = countBits(i / 2) + (i & 1)

    1. ans[i / 2] gives the number of set bits after removing
       the rightmost bit.
    2. (i & 1) checks whether the removed bit was 1.
    3. Add both values to get the set-bit count for i.
    4. Store the result so it can be reused for later numbers.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/