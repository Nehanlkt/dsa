#include <bits/stdc++.h>
using namespace std;
void pairs()
{
    pair<int, int> a = {1, 2};
    cout << a.first << " " << a.second;
    cout<<endl;
    pair<int,pair<int,int>> b={1,{2,4}};
    cout<<b.first<<" "<<b.second.first<<b.second.second;
    cout<<endl;
    pair<int,int> arr[]={{1,2},{1,3},{1,4}};
    cout<<arr[1].first;
}
void vectors(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);

        // pairs();
        vectors();
    }

