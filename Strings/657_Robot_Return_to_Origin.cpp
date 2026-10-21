/* class Solution {
public:
    bool judgeCircle(string moves) 
    {
        int ud = 0;
        int rl = 0;
        for(auto x:moves)
        {
            if(x=='U')
                ud++;
            if(x=='R')
                rl++;
            if(x=='D')
                ud--;
            if(x=='L')
                rl--;
        }
        if(ud==0 && rl==0)
            return true;
        return false;
    }
}; */
/*
    Algorithm:
    1. Initialize two variables, ud = 0 and rl = 0, to track vertical
       and horizontal displacement, respectively.
    2. Traverse each character in the moves string.
    3. If the character is 'U', increment ud.
    4. If the character is 'D', decrement ud.
    5. If the character is 'R', increment rl.
    6. If the character is 'L', decrement rl.
    7. If both ud and rl are zero, return true; otherwise, return false.

    Time Complexity: O(n)
    Space Complexity: O(1)

    Where n is the length of the moves string.
*/