#include<bits/stdc++.h>
using namespace std;


// merge sort.
// time complexity in all the cases is (nlogn)
// space complexity is O(n)

void merge(int arr[],int low,int mid,int high){
    int temp[high+1];

    int left=low;
    int right=mid+1;
int i=0;
    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right]){
            temp[i]=arr[left];
            i++;
            left++;
        }
        else{
            temp[i]=arr[right];
            i++;
            right++;
        }
    }
    while(left<=mid){
        temp[i]=arr[left];
        left++;
        i++;
    }
    while(right<=high){
        temp[i]=arr[right];
        right++;
        i++;
    }

    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void mergeSort(int arr[],int low,int high){
    if(low==high){
        return;
    }
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);

}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}