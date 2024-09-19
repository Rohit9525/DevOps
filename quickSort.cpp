#include<bits/stdc++.h>
using namespace std;

// quick sort.
// time complexity in all the cases is (nlogn)
// space complexity is O(1)

int partition(int arr[],int l,int r){
    int left=l;
    int right=r;

    int p=left;
    while(left<right){
    while(arr[left]<=arr[p]&& left<=r-1){  // we have used r-1 such that the left pointer does not exceed the array size
        left++;                  // if it exceeds then how the swap will be performed
    }
    while(arr[right]>arr[p] && right>=l+1){  // and similarily here we have used l+1
        right--;
    }

    if(left<right){
    int t=arr[right];
    arr[right]=arr[left];
    arr[left]=t;
    }
    }
    int t=arr[p];
    arr[p]=arr[right];
    arr[right]=t;
    return right;
}

void quickSort(int arr[],int left,int right){
if(left>=right){
    return;
}

int p=partition(arr,left,right);
quickSort(arr,left,p-1);
quickSort(arr,p+1,right);

}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}