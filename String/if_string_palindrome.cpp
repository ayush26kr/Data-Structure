#include<iostream>
#include<string.h>
using namespace std;
int isPlaindrome(string &str)
{
    int n=str.length();
    
    for(int i=0;i<n;i++)
    {
        if(str[i]!=str[n-i-1])
        return 0;
    }
    return 1;

}
int main()
{
    string str="ADAN";
    int result=isPlaindrome(str);
    if(result==0)
    cout<<"String is not Palindrome ";
    else cout<<"String is Palindrome";
    
}