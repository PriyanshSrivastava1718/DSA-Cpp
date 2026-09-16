/* class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int s = 1;
        int e = INT_MIN;
        long long n = piles.size();
        for(int i = 0;i<n;i++)
        {
            e = max(e , piles[i]);
        }   
        long long ans; 
        while(s<=e)
        {
            int speed = s+(e-s)/2;
            long long k = 0;
            for(int i = 0;i<n;i++)
            {
                if(piles[i]%speed == 0)
                    k += piles[i]/speed;
                else
                    k += (piles[i]/speed) + 1;
            }
            if(k<=h)
            {
                ans = speed;
                e=speed-1;
            }
            else
            {
                s = speed+1;
            }
        }
        return ans;
    }
}; */
/*
    Question Type: Binary Search on Answer

    Approach:
    - Binary search for Koko's minimum possible eating speed.
    - Search speed from 1 to the maximum pile size.
    - For each speed, calculate the total hours required to eat
      all piles using ceiling division.
    - If the required hours are <= h, the speed is valid, so search
      for a smaller speed.
    - Otherwise, the speed is too slow, so search for a larger speed.
    - Store the smallest valid speed found.

    Time Complexity: O(n log(max(piles)))
    Space Complexity: O(1)
*/