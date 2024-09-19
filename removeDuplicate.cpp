#include<bits/stdc++.h>
using namespace std;

void removeDuplicate(int arr[],int n){    // we are removing duplicacy from the sorted array
                                        // time complexity is O(n)
    int i,j=0;

    for(i=0;i<n;i++){
        if(arr[i]==arr[j]) continue;

    arr[j+1]=arr[i];
    j++;
        
    }

    for(int i=0;i<=j;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    removeDuplicate(arr,n);
}