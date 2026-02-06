#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("anss.txt", "w", stdout);
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // // precompilation
    // int hash[13]={0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]]+=1;
    // }
    // // fetch
    // int q;
    // cin>>q;
    // while(q--){
    //     int num;
    //     cin>>num;
    //     cout<<hash[num]<<endl;
    // }
    // return 0;



    // string s;
    // cin>>s;
    // // precompilation
    // int hash[26]={0};
    // for(int i=0;i<s.size();i++){
    //     hash[s[i]-'a']+=1;
    // }
    // // fetch
    // int q;
    // cin>>q;
    // while(q--){
    //     char ch;
    //     cin>>ch;
    //     cout<<hash[ch-'a']<<endl;
    // }
    // return 0;
    
    

    //hashing using map
    int n;
    cin>>n;
    int arr[n];
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]+=1;
    }
    // precompilation
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    // fetch
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<m[num]<<endl;
    }
    return 0;


    
}


    
    

    


