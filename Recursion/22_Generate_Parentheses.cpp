/* class Solution 
{
private:
    void generate(vector<string>& arr,string& ans,int lc,int rc)
    {
        if(lc==0 && rc==0)
        {
            arr.push_back(ans);
            return;
        }
        if(rc<lc && lc!=0)
            return;
        

        //include (
        if(lc>0)
        {
            ans+="(";
            generate(arr,ans,lc-1,rc);
            ans.pop_back();
        }



        //include )
        if(rc>0)
        {
            ans+=")";
            generate(arr,ans,lc,rc-1);
            ans.pop_back();
        }

    }
public:
    vector<string> generateParenthesis(int n) 
    {
        vector<string> arr;
        string ans ="";
        generate(arr,ans,n,n);
        return arr;
    }
}; */
/*
Approach: Backtracking (Recursion)

1. Use two variables 'lc' and 'rc' to track the remaining
   opening and closing parentheses respectively.

2. If both lc and rc become 0, a valid combination is
   generated and pushed into the result array.

3. Prune invalid branches whenever rc < lc, as they
   cannot produce a valid parentheses combination.

4. If lc > 0, include an opening parenthesis '(' and
   recursively explore the next state.

5. If rc > 0, include a closing parenthesis ')' and
   recursively explore the next state.

6. Use pop_back() after each recursive call to backtrack
   and restore the previous state.

Time Complexity: O(n * Cn)
Space Complexity: O(n) Auxiliary Space
Output Space: O(n * Cn)

Where Cn is the nth Catalan number:
Cn = (1 / (n + 1)) * (2n)! / (n! * n!)
*/