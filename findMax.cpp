#include<bits/stdc++.h>
using namespace std;

void findMax(int arr[],int n){
    
    int max=arr[0];        // time complexity O(n)       
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}

void secondLargest(int arr[],int n){
    int lar=arr[0];           // time complexity O(n)
    int slar=-1;

    for(int i=1;i<n;i++){
        if(arr[i]>lar){
            slar=lar;
            lar=arr[i];
        }
        else if(arr[i]<lar&&arr[i]>slar){
            slar=arr[i];
        }
    }
    cout<<slar;
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findMax(arr,n);
    secondLargest(arr,n); 
}