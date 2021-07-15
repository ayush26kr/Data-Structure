#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
vector<int>find(int a[],int n,int x);

int main()
{
    int n,x;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n],i;
    cout<<"Enter array -";
    for(i=0;i<n;i++)
    cin>>arr[i];
    vector<int>ans;
    cout<<"Enter element to be searched: ";
    cin>>x;
    ans=find(arr,n,x);

    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}
vector<int> find(int arr[], int n , int x )
{
    vector<int>result;
    int first=-1,last=-1;
    for(int i=0;i<n;i++)
    {
        if(x!=arr[i])
        continue;
        if(first==-1){
            first=i;
        }
        last=i;
    }
    if(first!=-1){
    result.push_back(first);
    result.push_back(last);
    }
    return result;
}