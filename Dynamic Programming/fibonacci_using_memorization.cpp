//using Memorization (top-down approach)
//0,1,1,2,3,5,8,13,21,34,55
#include<iostream>
using namespace std;
#define NIL -1
#define MAX 100
/*------------------------------using recursion---------
int fibonacci(int num)
{
    if(num<=1)
    return num;
    return fibonacci(num-1)+fibonacci(num-2);
}*/
int lookup[MAX];
void initialize()
{
    for(int i=0;i<MAX;i++)
    lookup[i]=NIL;
}
int fibonacci(int n)
{
    if(lookup[n]==NIL)
    {
        if(n<=1)
        lookup[n]=n;
        else
        lookup[n]=fibonacci(n-1)+fibonacci(n-2);
    }
    return lookup[n];

}


int main()
{
    int num;
    cin>>num;
    initialize();
   cout<< fibonacci(num);
}