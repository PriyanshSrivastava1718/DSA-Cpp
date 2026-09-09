class Solution {
public:
    int countCommas(int n) 
    {
        if(n>999)
            return n-999;
        return 0;
    }
};
/*
    Question Type: Math / Simulation

    Approach:
    Numbers below 1000 contain no commas.

    For every number greater than 999, the number of commas
    contributed can be calculated directly based on its range.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/