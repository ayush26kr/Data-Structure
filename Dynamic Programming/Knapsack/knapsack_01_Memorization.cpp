#include<iostream>
#include<cstring>
using namespace std;
int knapSack(int W,int wt[],int val[],int n)
{
    if(n==0||W==0)
    return 0;
    int dp[n+1][W+1];
    memset(dp,-1,sizeof(dp));

    if(dp[n][W]!=-1)
    return dp[n][W];

    if(wt[n-1]<=W)
    return dp[n][W]=max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));

    else if(wt[n-1]>W)
    return dp[n][W]=knapSack(W,wt,val,n-1);


}
int main()
{
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;                //capacity
    int n = sizeof(val) / sizeof(val[0]);  //number of items
    cout << "Maximum profit is: "<<knapSack(W, wt, val, n);
    return 0;   
}