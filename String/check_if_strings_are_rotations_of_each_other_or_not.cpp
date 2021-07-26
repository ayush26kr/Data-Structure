#include<iostream>
using namespace std;

bool if_rotation(string str1,string str2)
{
    if(str1.length()!=str2.length())
    return 0;
    string temp=str1+str1;
    return(temp.find(str2)!=string::npos);
}
int main()
{
    string str1="AYUSH", str2="SHAYU";
    if(if_rotation(str1,str2))
    cout<<str2<<" is a rotation of "<<str1;
    else
    cout<<str2<<" is not a rotation of "<<str1;
}