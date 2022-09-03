#include <bits/stdc++.h>
using namespace std;

string greaterString(string S, char k)
{
    for (int i = 0; i < S.size(); i++) {
        if (S[i] < k) {
            S.insert(i, 1, k);
            return S;
        }
    }
    S += k;
    return S;
}
int main(){
   string s;
   cin>>s;
   char k;
   cin>>k;
   cout <<SmallestString(s,k);
   return 0;
}
