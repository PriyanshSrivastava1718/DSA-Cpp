class Solution {
public:
    int numberOfMatches(int n) 
    {
        return n-1;
    }
};
/*
    Question Type: Tournament / Simulation

    Approach:
    - In every match, exactly one team loses.
    - The losing team is eliminated.
    - Therefore, starting with `n` teams, exactly `n - 1` teams
      must be eliminated before one winner remains.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/