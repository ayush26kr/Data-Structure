#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
vector<int> findTwoElement(vector<int>arr, int n) {
        // code here
        vector<int>result;
        int sum=0,sq_sum=0,nsum=0,nsqsum=0;
        
        nsum=n*(n+1)/2;  //natural sum of n 
        nsqsum=n*(n+1)*(2*n+1)/6;   //natural sum of n^2
      
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            sq_sum+=pow(arr[i],2);
        }
        int x;  //repeating
        int y;   //missing
       
        int a=nsum-sum;
        int b=(nsqsum-sq_sum)-(x-y);
        x=(a+b)/2;
        y=b-x;
        cout<<x<<" "<<y;
        result.push_back(x);
        result.push_back(y);
        return result;
    }
int main()
{
    vector<int>result;
    int n,i;
    cout<<"Enter size of array: ";
    cin>>n;
    vector<int>arr;
    
    for(i=0;i<n;i++){
        int temp;
        cin>>temp;
        result.push_back(temp);
    }
    

    result=findTwoElement(arr,n);
    cout<<"Repeating element : ";
    cout<<result[0];
    cout<<"Missing element : ";
    cout<<result[1];
}