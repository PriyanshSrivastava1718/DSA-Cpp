/* class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) 
    {
        int c1,c2;

        string x = coordinate1;
            int b = x[1] - '0';
            if(b%2==0)
            {
                if(x[0]=='b' ||x[0]=='d'||x[0]=='f'||x[0]=='h' )
                    c1 = 1;
                else
                    c1 = 2;
            }
            else
            {
                if(x[0]=='a' ||x[0]=='c'||x[0]=='e'||x[0]=='g' )
                    c1 = 1;
                else
                    c1 = 2;
            }
        x = coordinate2;
            b = x[1] - '0';
            if(b%2==0)
            {
                if(x[0]=='b' ||x[0]=='d'||x[0]=='f'||x[0]=='h' )
                    c2 = 1;
                else
                    c2 = 2;
            }
            else
            {
                if(x[0]=='a' ||x[0]=='c'||x[0]=='e'||x[0]=='g' )
                    c2 = 1;
                else
                    c2 = 2;
            }
        return c1==c2;
    }
}; */
/*
Problem: 3274. Check if Two Chessboard Squares Have the Same Color
Platform: LeetCode
Topic: Strings, Math

Approach:
1. Extract the row number from each coordinate by converting
   the digit character into an integer.
2. Check whether the row is even or odd.
3. Based on the row parity, determine the square's color
   using its column character.
4. Assign a color identifier (1 or 2) to each square.
5. Return true if both squares have the same color.

Time Complexity: O(1)
Auxiliary Space: O(1)

Key Learning:
The color of a chessboard square depends on both its row
and column. Alternating row and column parity determines
whether two squares share the same color.
*/