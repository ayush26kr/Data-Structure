/*
memset() is used to fill a block of memory with a particular value.
The syntax of memset() function is as follows :

// ptr ==> Starting address of memory to be filled
// x   ==> Value to be filled
// n   ==> Number of bytes to be filled starting 
//         from ptr to be filled
void *memset(void *ptr, int x, size_t n);

*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[50]="Ayush Kumar is a GOOD boy";
    cout<<"Before memset() -"<<str;

    cout<<endl<<endl;

    memset(str+5,'.',12);
    cout<<"After memset() -"<<str;
    
}