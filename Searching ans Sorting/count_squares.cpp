#include<iostream>
#include<math.h>
using namespace std;

int countSquares(int N)
{
    int count=0;
    int x=sqrt(N);
    while(x>0)
    {
        if(x*x<N)
        count++;
        x--;
    }
    return count;
}
int main()
{
    int N;
    cout<<"Enter max: ";
    cin>>N;
    cout<<countSquares(N);
}
