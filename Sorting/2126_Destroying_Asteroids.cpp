/* class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) 
    {
        int n = asteroids.size();
        sort(asteroids.begin(),asteroids.end());
        long long ans = mass;
        for(int i = 0;i<n;i++)
        {
            if(ans>=(long long)asteroids[i])
            {
                ans+=(long long)asteroids[i];
            }
            else
                return false;
        }
        return true;
    }
}; */

/*
Approach:
- Sort asteroids in ascending order.
- Start with the initial mass.
- Destroy asteroids from smallest to largest.
- Add each destroyed asteroid's mass to current mass.
- If current mass is insufficient, return false.

Time Complexity: O(n log n)
Space Complexity: O(1) auxiliary space.
*/