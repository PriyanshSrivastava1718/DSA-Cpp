/* class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) 
    {
        bool horizontal = rec1[0] < rec2[2] && rec2[0] < rec1[2];
        bool vertical = rec1[1] < rec2[3] && rec2[1] < rec1[3];
        return horizontal && vertical;
    }
}; */
/*
    Question Type: Rectangle Overlap

    Approach:
    - Check whether the two rectangles overlap horizontally.
    - Check whether they overlap vertically.
    - Rectangles overlap only when both horizontal and vertical
      overlaps exist.
    - Use strict `<` because touching at an edge is not considered
      an overlap.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/