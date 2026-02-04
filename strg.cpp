#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s="neha";
    int len=s.size();
    s[len-1]='z';
    cout<<s[len-1];
    return 0;
}
