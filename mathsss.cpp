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
void cntnum1(int N)
{
    int cnt1 = ((int)log10(N) + 1);
    cout << cnt1 << endl;
}

void reversing(int N)
{
    int revnum = 0;
    int lastdigit1;
    while (N > 0)
    {
        lastdigit1 = N % 10;
        N = N / 10;
        revnum = (revnum * 10) + lastdigit1;
    }
    cout << revnum << endl;
}

void checkpalindrome(int N)
{
    int dup = N;
    int revnum4 = 0;
    while (N > 0)
    {
        int lastdigit3 = N % 10;
        revnum4 = (revnum4 * 10) + lastdigit3;
        N = N / 10;
    }
    if (revnum4 == dup)cout<<"true";
    else
        cout << "false";
    cout << endl;
}

void divisors(int N){
    for(int i=1;i<=N;i++){
        if(N%i==0)cout<<i<<" ";
    }
    cout<<endl;
}

void divisors1(int N){
    vector<int> v;
    for(int i=1;i<=sqrt(N);i++){
        if(N%i==0){
            v.push_back(i);
            if(N%i!=i){
                v.push_back(N/i);
            }
        }
    


    }
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;

}

void primecheck(int N){
    int cntt=0;
    for(int i=1;i*i<=N;i++){
        if(N%i==0){
           cntt++;
            if((N/i)!=i){
            cntt++;
        }
    }
        
        
    }
    if(cntt==2)cout<<"true";
    else cout<<"false";
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
        // cntnum(N);
        // cntnum1(N);
        // reversing(N);
        // checkpalindrome(N);
        // divisors(N);
        // divisors1(N);
        primecheck(N);

    }
}