#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int C=50;
    int H=30;
    string str;
    cin>>str;
    
    vector<int>v;
    vector<int>ans;
    stringstream ss(str);
    
    for(int i;ss>>i;){
        v.push_back(i);
        if(ss.peek()==',')
        ss.ignore();
    }
    
    for(auto D:v){
        int Q=0;
        Q=round(sqrt((2*C*D)/H));
        ans.push_back(Q);
    }
    int n=ans.size()-1;
    for(auto x:ans){
        cout<<x;
        if(n>0){
            cout<<",";
            n--;
        }
    }
    return 0;
}
