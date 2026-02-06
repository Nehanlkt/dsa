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

void f4(int i,int sum){
    // summation of first n num
    // these is paratemerized fn recursion
    if(i<1){
        cout<<sum;
        return;
    }
    f4(i-1,sum+i);
}

int f5(int N){
    if(N==0) return 0;
    return N+f5(N-1);

}

int f6(int N){
    // factorial number
    if(N==0)return 1;
    if(N==1)return 1;
    return N*f6(N-1);
}
    
void f7(int i,int arr[],int N){
    if(i>=N/2)return;
    swap(arr[i],arr[N-i-1]);
    f7(i+1,arr,N);
}

bool f8(string s,int N,int i){
    if(i>=N/2)return true;

    if (s[i] != s[N-i-1]) return false;

    return f8(s, N, i+1);
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
        // int sum;
        string s;
        cin>>s;
        // int arr[N];
        // for(int i=0;i<N;i++){
        //     cin>>arr[i];
        // }
        // f7(0,arr,N);
        // for(int i=0;i<N;i++){
        //     cout<<arr[i];
        // }

        // f(1,N);
        // f2(N,N);
        // f3(N,N);
        // f4(N,0);
        // cout<<f6(N);
        cout<<f8(s,N,i);
        // where here n is size of string or u can give s.size()
       


    }
}