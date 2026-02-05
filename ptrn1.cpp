#include <bits/stdc++.h>
using namespace std;

int ptrn1(int N)
{
    // ptrn1️⃣👍
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int ptrn2(int N)
// ptrn2️⃣😒
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}

// ptrn3️⃣👍
// same as ptrn 2 but start with 1 for both and thrn <=comes and print j

// ptrn 4️⃣👍
// same as ptn3 but print i

// ptrn 5️⃣n6️⃣😒
// for(int i=1;i<=N;i++){
//     for(int j=1;j<=N-i+1;j++){
//         cout<< j;
//     }
//     cout<<endl;
// }

int ptrn10(int N)
{

    for (int i = 1; i <= 2 * N - 1; i++)
    {
        int stars = i;
        for (int j = 1; j <= stars; j++)
        {
            cout << " *";
            if (i > N)
                stars = 2 * N - i;
        }
        cout << endl;
    }
}

int ptrn11(int N)
{
    for (int i = 1; i <= N; i++)
    {
        int start = 1;
        if (i % 2 == 0)
            start = 0;
        else
            start = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

int ptrn12(int N)
{
    int space = 2 * (N - 1);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

int ptrn13(int N){
    int num=1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num+=1;

        }
        cout<<endl;
    }
}

int ptrn14(int N){
    for(int i=0;i<N;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int ptrn15(int N){
    for(int i=0;i<N;i++){
        for(char ch='A';ch<='A'+(N-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int ptrn16(int N){
    for(int i=0;i<N;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";

        }
        cout<<endl;
    }
}
int ptrn18(int N){
    for(int i=0;i<N;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int ptrn19(int N){
    int space=0;
    for(int i=0;i<N;i++){
        for(int j=0;j<N-i;j++){
            cout<<"*";
        }
        for(int j=0;j<space;j++){
            cout<<" ";
        }
        for(int j=0;j<N-i;j++){
            cout<<"*";
        }
        space+=2;
        cout<<endl;
    }
    space=8;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=1;j<space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        space-=2;
        cout<<endl;
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("otp.txt", "w", stdout);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int N;
        cin >> N;
        ptrn19(N);
    }
}

