#include<bits/stdc++.h>
using namespace std;

// selection sort.
// time complexity is (n^2) for all cases

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    for(int i=0;i<n-1;i++){

        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
            
                int k=arr[i];
                arr[i]=arr[min];
                arr[min]=k;
            
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}