#include<iostream>
using namespace std;
int middle(int a, int b, int c){
        //code here//Position this line where user code will be pasted.
      if ((a <= b && b <= c) || (c <= b && b <= a))
       return b;
 
    // Checking for a
    else if ((b <= a && a <= c) || (c <= a && a <= b))
       return a;
 
    else
       return c;
    }
int main()
{
    int a,b,c;
    cout<<"Enter values: ";
    cout<<"A: ";
    cin>>a;
    cout<<"B: ";
    cin>>b;
    cout<<"C: ";
    cin>>c;

    cout<<"Middle of "<<a<<" "<<b<<" "<<c<<" is :"<<middle(a,b,c);
    return 0;

}