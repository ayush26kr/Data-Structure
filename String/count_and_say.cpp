#include<iostream>
#include<string.h>
using namespace std;
string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2) return "11";
        string s="11";
        for(int i=3;i<=n;i++)
        {
            string t="";
            s=s+'&';  //add a deelimeter to end of the string to know the end
            int count=1;
            for(int j=1;j<s.length();j++)
            {
                if(s[j]!=s[j-1])
                {
                    t=t+to_string(count); //to string is used to convert int(count) to string(count)
                    t=t+s[j-1];
                    count=1;
                }
                else count++;
            }
            s=t;
        }
        return s; 
    }
int main()
{
    int n;
    cout<<"enter n  :";
    cin>>n;
    cout<<countAndSay(n);

}

/*
1
11
21
1211
111221
............
*/