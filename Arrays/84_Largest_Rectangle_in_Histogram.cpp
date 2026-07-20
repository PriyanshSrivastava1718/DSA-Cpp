/* 
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) 
    {
        int n = heights.size();
        vector<int>left(n,0);
        vector<int> right(n,0);
        stack<int>s;
        for(int i = n-1;i>=0;i--)    //loop for right smaller element
        {//storing value in stack and then in array (index) for right limit
            while(s.size()>0 && heights[s.top()] >= heights[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                right[i] = n; //n because when no such boundry exist
            } 
            else
            {
                right[i]=s.top();
            }
            s.push(i);
        }
        while(!s.empty())   //empty stack
            s.pop();
        for(int i = 0;i<n;i++)//loop for left smaller element
        {//storing value in stack and then in array (index) for left limit
            while(s.size()>0 && heights[s.top()] >= heights[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                left[i] = -1;
            } 
            else
            {
                left[i]=s.top();
            }
            s.push(i);
        }
        int ans = 0; //largest possible area
        for(int i =0;i<n;i++)
        {
            int width  = right[i]-left[i]-1;
            int maxarea = heights[i] * width;
            ans = max(ans,maxarea);
        }
        return ans;
    }
};
 */