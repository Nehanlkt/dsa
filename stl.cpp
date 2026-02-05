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
    //  v4.erase(v4.begin()+1,v4.end()-2);
    // for(auto z:v4){
    //     cout<<z<<" ";
    // }

    // erase function
    // v4.erase(v4.begin(),v4.begin()+2);
    //  for(auto z:v4){
    //     cout<<z<<" ";
    // }

    // insert fn
    // v4.insert(v4.begin()+1,300);
    //  for(auto z:v4){
    //     cout<<z<<" ";
    // }

    // v4.insert(v4.begin()+1,3,300);
    for (auto z : v4)
    {
        cout << z << " ";
    }
}
void lists()
{
    list<int> l;
    l.push_back(4);
    l.push_back(2);
    l.push_back(5);
    l.push_front(1);
    //   emplacefront n back can also be used
    for (auto b : l)
    {
        cout << b;
    }
}

void stack1()
{
    // here no indexing therefore no for loop used to print stacks
    stack<int> st;
    st.push(1);
    st.push(4);
    st.push(9);
    
    //  while loop used to print
    while (!st.empty())
    {

        cout << st.top() << " ";
        st.pop();

        // works like for printing elem its remove its top elem print like that continues
    }
}

void q(){
    // opp to stack fifo
    queue<int> q;
    q.push(1);
    q.push(4);
    q.emplace(5);
    // here back elem is 5 and fronnt elem is 1
    q.back()+=5;  //adds 5 to elem 5which is back elem
    while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
}



}

void pq(){
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(30);
    pq.push(10);
    pq.push(20);

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
}

void set1(){
    // sorted+unique
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(5);
    st.insert(5);
    st.count(1); //t r f 
    st.find(5);
    st.find(9);
     for (int x : st) {
        cout << x << " ";
    }
    




}

void multiset(){
    // sorted+not unique

}

void mapp(){
    // map<int,int> m;
    // m[1]=2; //stores as 1,2
    // // or m.emplace({1,2})
    //  for (auto x : m) {
    //      cout << x.first << " " << x.second << endl;
    // }

    // map<int,pair<int,int>> m1;
    // m1[4]={3,6};
    // for (auto x : m1) {
    //      cout << x.first << " " << x.second.first <<" "<<x.second.second<< endl;
    // }
    // or m1.emplace(4,{3,6})

    // iterator version
//     for (auto it = m1.begin(); it != m1.end(); it++) {
//     cout << it->first << " -> "
//          << it->second.first << " "
//          << it->second.second << endl;
// }



}



int main()
{
    freopen("input.txt", "r", stdin);
    freopen("ans.txt", "w", stdout);

    // pairs();
    // vectors();
    // lists();
    // stack1();
    // q();
    // pq();
    // set1();
    // mapp();
}
