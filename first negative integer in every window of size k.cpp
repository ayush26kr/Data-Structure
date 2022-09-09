/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

vector<int> orderPizza(vector<int>orderPlaced,int size){
    vector<int>answer;
    int n=orderPlaced.size();
    bool flag;
    for(int i=0;i<(n-size+1);i++){
        flag=false;
        for(int j=0;j<size;j++){
            if(orderPlaced[i+j]<0){
                answer.push_back(orderPlaced[i+j]);
                flag=true;
                break;
            }
        }
        if(!flag)
        answer.push_back(0);
    }
    return answer;
}

int main()
{
    vector<int>orderPlaced{-11,-2,19,37,64,-18};
    int size=3;
    vector<int>ans=orderPizza(orderPlaced,size);
    for(auto x:ans)
    cout<<x<<" ";

    return 0;
}
