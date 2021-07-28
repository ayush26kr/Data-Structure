#include<iostream>
using namespace std;

int isSubsetSum(int set[],int n,int sum)
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
           
            if(set[i-1]>j)
            dp[i][j]=dp[i-1][j];
            else if(set[i-1]<=j)
            dp[i][j]=dp[i-1][j-set[i-1]] + dp[i-1][j];
        }
    }
    /*for (int i = 0; i <= n; i++)
     {
       for (int j = 0; j <= sum; j++)
          cout<<dp[i][j]<<"  ";
       cout<<endl;
     }*/

    return dp[n][sum];
    
}

int main()
{
    int set[] = { 3, 34, 4, 12, 5, 2 ,9,7};
    int sum = 9;
    int n = sizeof(set) / sizeof(set[0]);
    cout<<"subsets with sum "<<sum<<" are : "<<isSubsetSum(set, n, sum);
      
}
    