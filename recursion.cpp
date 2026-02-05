#include<bits/stdc++.h>
using namespace std;
void f(int i,int N){
    if(i>N)return;
    cout<<"Neha"<<endl;
    f(i+1,N);
    // if endln given here prints simply spaces 5 n neha5times in same line only
}

void f1(int i,int N){
    if(i>N)return;
    cout<<i<<endl;
    f1(i+1,N);

}

void f2(int i,int N){
      if(i<1)return;
      cout<<(i)<<endl;
      f2(i-1,N);
}

void f3(int i,int N){
    // backtracting
    if(i<1)return;
    f3(i-1,N);
    cout<<i;
}




int main()
{
    freopen("input.txt", "r", stdin);
    freopen("anss.txt", "w", stdout);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int N;
        cin >> N;
        // f(1,N);
        // f2(N,N);
        f3(N,N);

    }
}