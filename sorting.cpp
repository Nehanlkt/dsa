#include <bits/stdc++.h>
using namespace std;
void selection_sort(int n, int arr[])
{
    for (int i = 0; i <= n - 2; i++)
    {
        // loop used for swapping
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        // swap
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void bubble_sort(int n, int arr[])
{
    for (int i = n - 1; i >= 0; i--)
    {
        // this usefull when already sorted array given
        int didswap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didswap = 1;
            }
           
        }
         if (didswap == 0)
            {
                break;
            }
    }
}

void insertion_sort(int n,int arr[]){
    for(int i=0;i<=n-1;i++){
        int j=i;
        // left>right then swap
        while(j>0&&arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }

    }

}

void mergesort(arr[],low,high){
    if(low>=high)return;
    mergesort(arr[],low,mid);
    mergesort(arr[],mid+1,high);
    merge(arr[],low,mid,high);
}
void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp
    int left=low;
    right=mid+1;
    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right])
          temp.add(arr[left])
          left++;
        else
          temp.add(arr[right])
          right++;  
    }
    while(left<=mid){
        temp.add(arr[left]);
        left++;
    }
    while(right<=high){
        temp.add(arr[right]);
        right++;
    }
    for(i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("anss.txt", "w", stdout);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // selection_sort(n,arr);
    // bubble_sort(n, arr);
    insertion_sort(n,arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
        ;
    }
}