#include<iostream>
using namespace std;
int findMin(int arr[],int n)
{
    //sum of all elements
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];

    bool dp[n+1][sum+1];
    
    for(int i=0;i<=n;i++)
    dp[i][0]=true;

    for(int j=0;j<=sum;j++)
    dp[0][j]=false;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]>j)
            dp[i][j]=dp[i-1][j];

            else if(arr[i-1]<=j)
            dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
        }
    }

    //initialize difference of two sums
    int diff=INT_MAX;
    for(int j=sum/2;j>=0;j--)   //we are traversing the last row (i=n) of the table to check where it is true such that j<=sum/2; 
    {
        if(dp[n][j]==true)
        {
            diff=sum-2*j;
            break;
        }
    }

    return diff;
}
int main()
{
    int arr[] = { 3, 1, 4, 2, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The minimum possible difference of two sets is:  " << findMin(arr, n);
    return 0;
}