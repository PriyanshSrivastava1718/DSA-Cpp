/* class Solution {
public:
    int divide(int dividend, int divisor) 
    {
        if (dividend == INT_MIN && divisor == -1)       
            return INT_MAX;
        long long divisorr = divisor;       //all long long to avoid overflow
        long long divident = dividend;
        long long s = 0;
        long long e = llabs(divident);
        long long ans = 0;      

        while (s <= e) {        //binary search logic

            long long mid = s + (e - s) / 2;        

            if (mid * llabs(divisorr) == llabs(divident))       //taking abs to avoid negative
            {
                ans = mid;       //save mid in ans
                break;
            }

            else if (mid * llabs(divisorr) < llabs(divident) )      
            {
                ans = mid;
                s = mid + 1;
            }

            else 
            {
                e = mid - 1;
            }
        }

        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))      //in case of -ve ans
            return -ans;

        return ans;
    }
}; */
/*
Algorithm: Binary Search

Approach:

- Since quotient lies between 0 and |dividend|,
  apply Binary Search on this range.

- Search from 0 to absolute value of dividend.

- For every mid:
    - If mid * |divisor| == |dividend|,
      we found the exact quotient.
    - If product is smaller,
      store current mid as answer and search on the right.
    - Otherwise,
      search on the left.

- After finding the quotient,
  check the signs of dividend and divisor.
  If signs are different,
  return negative answer,
  otherwise return positive answer.

- Handle the overflow case separately:
  INT_MIN / -1 returns INT_MAX.

Time Complexity: O(log |dividend|)

Space Complexity: O(1)
*/