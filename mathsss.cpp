#include <bits/stdc++.h>
using namespace std;

// count of numbers=num of times /10
void cntnum(int N)
{
    int cnt = 0;
    while (N > 0)
    {
        N = N / 10;
        cnt += 1;
    }
    cout << cnt << endl;
}

// count num with less time complexity
void cntnum1(int N){
    int cnt1=((int)log10(N)+1);
    cout<<cnt1<<endl;
}

void reversing(){
    
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int N;
        cin >> N;
        // cntnum(N);
        cntnum1(N);
    }
}