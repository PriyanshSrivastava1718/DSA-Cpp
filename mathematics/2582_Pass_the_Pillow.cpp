/* class Solution {
public:
    int passThePillow(int n, int time) 
    {
        int ans = 1;
        int x = 2*(n-1);
        while(time> 2*(n-1))
        {
            time = time - 2*(n-1);
        }
        if(time < n)
        {
            for(int i = 1;i<=time;i++)
            {
                ans++;
            }
        }    
        else
        {
            time = time - (n-1);
            ans = n;
            for(int i = 0;i<time;i++)
            {
                ans--;
            }
        }
        return ans;
    }
}; */
/*
    Question Type: Simulation / Circular Movement

    Approach:
    - The pillow moves from 1 to `n` and then back to 1 repeatedly.
    - One complete cycle takes `2 * (n - 1)` seconds.
    - Reduce `time` to a single cycle.
    - If `time < n`, the pillow is moving forward from 1.
    - Otherwise, start from `n` and move backward for the remaining time.
    - Return the final position.

    Time Complexity: O(n) in the current implementation
    Space Complexity: O(1)
*/