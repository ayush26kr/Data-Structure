#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


string solve(string s){
    string ans;
    int x=stoi(s);
    x=x*2;
    stringstream ss;
    ss<<x;
    ss>>ans;
    return ans;
    
}
int main(){
   string s;
   cin>>s;
   cout<<solve(s);
    return 0;
}
