#include<iostream>
using namespace std;
int SubSetsum(int set[],int n,int sum)
{
    int dp[n+1][sum+1];
    for(int j=0;j<=sum;j++)
    dp[0][j]=0;
    for(int i=0;i<=n;i++)
    dp[i][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=sum;j++)
        {
            if(i==0)
            dp[i][j]=0;
            if(j==0)
            dp[i][j]=1;
            if(set[i-1]>j)
            dp[i][j]=dp[i-1][j];
            else if(set[i-1]<=j)
            dp[i][j]=dp[i-1][j-set[i-1]] || dp[i-1][j];
        }
    }
   
    return dp[n][sum];
    
}

int equalPartition(int n, int arr[])
{
    // code here
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];
    if(sum%2!=0)
    return 0;
    else
    return SubSetsum(arr,n,sum/2);
}

int main()
{
    int arr[]={1, 5, 11, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(equalPartition(n,arr))
    cout<<"YES";
    else
    cout<<"NO";

}