/*Given an array Arr[] of size L and a number N, you need to write a program to find if there exists a pair of elements in the array whose difference is N.*/
#include<iostream>
#include<math.h>
using namespace std;
bool findPair(int arr[],int size,int x)
{ int ans=-1;
for(int i=0;i<size;i++)
        {
            int y=arr[i]+x;
            for(int j=0;j<size;j++)
            {
                if(arr[j]==y)
                ans=1;
                break;
            }
            
        }
        return ans;
    
}

int main()
{
    int dif;
    int arr[]={5,20,3,2,5,80};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter difference: ";
    cin>>dif;
    cout<<findPair(arr,size,dif);
}
