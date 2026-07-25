/* class Solution {
public:
    int maxProduct(int n) 
    {
        int max1; //maximum digit
        int max2 = INT_MIN;  //second miximum digit
        int save =n;
        int t = n%10;
        max1=t;  //first digit of n (reverse manner)
        n/=10;
        while(n!=0)        //to calculate max digit
        {
            t = n % 10;
            if(t>max1)      
                max1 = t;
            n = n/10;       
        }
        int count = 0;      //count frequency of largest digit
        while(save!=0)      //for second maximum
        {
            t = save % 10;
            if(t==max1)
                count++;
            if(t<max1 && t>max2)
                max2 = t;
            save/=10;
            if(count==2)        //if largest occur twice
            {
                max2 = t;
                break;
            }
        }
        if(max2!=INT_MIN)       //if 1 digit number
            return max1*max2;
        else
            return max1*max1;
    }
};   */
/* 
algorithm = using digit extraction 
            store max1 and max2 (2 largest digit)
            use counter in case of repetative max digit 
            return their product
time complexity = O(d) where d = digits 
space complexity = O(1)
*/