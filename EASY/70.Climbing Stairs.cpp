// Question - link --> https://leetcode.com/problems/climbing-stairs/
// Solution -->
class Solution {
public:
    int climbStairs(int n) {
        if(n==0)
            return 0;
        int * arr = new int[n+2];
        for(int i=3;i<=n;i++)
        {
            arr[i] = 0;
        }
        arr[0]=1;
        arr[1]=1;
        arr[2]=2;
        return count(arr,n);
    }
    int count(int *arr,int n)
    {
        if(arr[n]==0)
        {
            int x = count(arr,n-1);
            int y = count(arr,n-2);
            arr[n]=x+y;
        }
        return arr[n];
    }
};