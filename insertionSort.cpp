#include<bits/stdc++.h>
using namespace std;


// insertion sort.
// time complexity for average and worst case is (n^2)
// time complexity for best case is (n)
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
        for(int i=0;i<n;i++){
            int j=i;
            while(j>0&&arr[j-1]>arr[j]){
                int t=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=t;
                j--;
            }
        }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}