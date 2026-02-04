#include <bits/stdc++.h>
using namespace std;
void pairs()
{
    pair<int, int> a = {1, 2};
    cout << a.first << " " << a.second;
    cout << endl;
    pair<int, pair<int, int>> b = {1, {2, 4}};
    cout << b.first << " " << b.second.first << b.second.second;
    cout << endl;
    pair<int, int> arr[] = {{1, 2}, {1, 3}, {1, 4}};
    cout << arr[1].first;
}
void vectors()
{
    // vector<int> v;
    // v.push_back(1);        //adds 1 to empty vector v
    // v.emplace_back(2);   //this one is fast adds 2 already 1 present in v

    // for (auto a:v) {
    //     cout << a << " ";
    // }
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }
    // these 2 r equal

    // to push pairs
    // vector<pair<int,int>> v1;
    // v1.emplace_back(1,2);
    // v1.push_back({3,4});
    // for (auto p : v1) {
    //     cout << p.first << " " << p.second << endl;
    // }

    // iterators😊
    //  to print from start
    // vector<int> v3;
    // v3 = {2, 3, 5, 7, 8};
    // vector<int>::iterator it;
    // it=v3.begin();
    // it += 3;
    // cout << *(it) << " ";

    // to print last elem 
     vector<int> v4;
    v4 = {2, 6, 5, 7, 2};
    // vector<int>::iterator it;
    // it=v4.end();
    // it --;
    // cout << *(it) << " ";


    // to print entire vector
    // for(auto z:v4){
    //     cout<<z<<" ";
    // }

    // to erase
    // v4.erase(v4.begin()+1);
    // for(auto z:v4){
    //     cout<<z<<" ";
    // }   //deleted only one elem


    // to delete more elem start,end but end not included
     v4.erase(v4.begin()+1,v4.end()-2);
    for(auto z:v4){
        cout<<z<<" ";
    }  





    

}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);

    // pairs();
    vectors();
}
