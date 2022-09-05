#include<bits/stdc++.h>
using namespace std;


int repeatedStringMatch(string A, string B) {
    for (auto i = 0, j = 0; i < A.size(); ++i) {
        for (j = 0; j < B.size() && A[(i + j) % A.size()] == B[j]; ++j);
        if (j == B.size()) 
            if(((i + j - 1) / A.size() + 1)>0)
            return 1;
    }
    return 0;
}
int main()
{
	string a,b;
	cin>>a;
	cin>>b;
	int n=repeatedStringMatch(a,b);
	if(n==-1)
	cout<<"0";
	else
	cout<<"1";
}
