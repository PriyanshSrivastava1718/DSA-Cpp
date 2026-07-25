#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int s = 1;
        int e = arr.size()-2;        // s=1 and e=n-2 bcs comparing i+1 and i-1 in it
        int m,p=0;      //m=mid and p to store index
        while(s<=e)
        {
            m = s + (e-s)/2;
            if(arr[m]>arr[m+1]&&arr[m]>arr[m-1])    //breaking point
            {
                p = m; //store m
                break;
            }
            else if (arr[m]>arr[m+1])
                e = m - 1;
            else
                s = m + 1;
        }
        return  p;
    }
};
/* 
algorithm = in case of 2 different continues sorted form 
            we use binary search logic to find peak
            save m index in p 
            return p
time complexity = O(log n)
space complexity = O(1)
*/