#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int max(int a ,int b)
{
    return (a>b)?a:b;
}

int LCS(string &A,string &B,int n,int m)
{
    if(n==0||m==0)
    return 0;
    if(A[n-1]==B[m-1])
    return 1+LCS(A,B,n-1,m-1);
    else
    return max(LCS(A,B,n,m-1),LCS(A,B,n-1,m));
   

}
int main()
{
    string A="aabbbbaabab";
    string B="aaaaaaaaa";
    int n=A.length();
    int m=B.length();


    cout<<"Length of longest common subsequence is ";
    cout<<LCS(A,B,n,m);
}