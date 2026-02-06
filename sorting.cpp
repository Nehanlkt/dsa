#include<bits/stdc++.h>
using namespace std;
void selection_sort(int n,int arr[]){
    for(int i=0;i<=n-2;i++){
        // loop used for swapping
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min])
            min=j;

        }
        // swap
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;



    }

}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("anss.txt", "w", stdout);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}