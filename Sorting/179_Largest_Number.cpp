/* class Solution {
public:
    string largestNumber(vector<int>& nums) {
        auto myComparator = [](int& a, int& b) //our way
        {
            string s1 = to_string(a);
            string s2 = to_string(b);       
            return s1+s2 > s2+s1;//compare 2 at a time and maintain this throughout
        };
        sort(begin(nums), end(nums), myComparator);
        if(nums[0]==0)
            return "0";  //since 00 is not a number
        string result = "";     //ans in string
        for(int& num : nums )       //adding to string 
        {
            result += to_string(num);
        }
        return result;      //return result
    }
}; */
/*
    Algorithm:
    1. Convert the numbers into strings while comparing them.
    2. For any two numbers a and b, compare a+b with b+a.
    3. Place a before b when a+b is greater than b+a.
    4. Sort the entire array using this custom comparator.
    5. If the largest element is 0, return "0" to handle cases like [0,0].
    6. Concatenate the sorted numbers to form the largest possible number.

    Time Complexity: O(n log n * k)
    Space Complexity: O(n * k)
    
    Where k is the maximum number of digits in a number.
*/