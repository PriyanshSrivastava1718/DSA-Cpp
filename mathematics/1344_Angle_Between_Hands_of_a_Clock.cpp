/* class Solution {
public:
    double angleClock(int hour, int minutes) 
    {
        double mindeg = 6 * minutes;
        double hourdeg;
        if(hour!=12)
            hourdeg = 30*hour+ 0.5*minutes;
        else 
            hourdeg = 0.5*minutes;
        double ans  = abs(mindeg-hourdeg);
        return min(ans,360-ans);
    }
}; */
/*
    Question Type: Math / Geometry

    Approach:
    Calculate the position of both clock hands in degrees.

    The minute hand moves 6 degrees per minute.
    The hour hand moves 30 degrees per hour and 0.5 degrees
    for every minute passed.

    Calculate the absolute difference between the two positions.
    Since there are two possible angles between the hands, return
    the smaller angle.

    Time Complexity: O(1)
    Space Complexity: O(1)
*/