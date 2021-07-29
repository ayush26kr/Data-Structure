#include<iostream>
using namespace std;

int count_SubsetSum(int set[],int n,int sum)
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

    return dp[n][sum];
    
}
int Subsets_w_dif(int arr[],int n,int diff)
{
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];

    /* s1->sum of subset1    s2->sum of subset 2
            s1+s2=sum
            s1-s2=diff
            ___________
    (adding) 2s1=sum+diff
               s1=sum+diff/2  */

    int s1=(sum+diff)/2;

    return count_SubsetSum(arr,n,s1);
}
int main()
{
    int A[] = {1, 1, 1, 1, 1};
    int target = 3;
    int n=sizeof(A)/sizeof(A[0]);
    cout<<"Number of subsets are: "<<Subsets_w_dif(A,n,target);
}