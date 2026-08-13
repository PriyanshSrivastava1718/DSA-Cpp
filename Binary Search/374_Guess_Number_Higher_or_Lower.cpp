/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
/* 
class Solution {
public:
    int guessNumber(int n) 
    {
        int s = 1;
        int e = n;
        int m,ans;
        while(s<=e)
        {
            m = s+(e-s)/2;
            if(guess(m)==0)
                return m;
            else if(guess(m)==1)
                s=m+1;
            else
                e = m -1;
        }
        return s;
    }
}; */
/*
    Algorithm:
    1. Apply binary search on the range from 1 to n.
    2. Check the middle number using the guess() API.
    3. If guess(m) returns 0, the middle number is the picked number.
    4. If guess(m) returns 1, the picked number is greater, so search the right half.
    5. If guess(m) returns -1, the picked number is smaller, so search the left half.
    6. Continue until the picked number is found and return it.

    Time Complexity: O(log n)
    Space Complexity: O(1)
*/