#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

void reverse_str(string &str)
{
    int size=str.length();
    for(int i=0;i<size/2;i++)
    swap(str[i],str[size-i-1]);
}
int main()
{
    string str="AYUSH";
    reverse_str(str);
    cout<<str;
    return 0;
}