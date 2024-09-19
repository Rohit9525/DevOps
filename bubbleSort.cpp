#include<bits/stdc++.h>
using namespace std;


// bubble sort.
// time complexity for average and worst case is (n^2)
// time complexity for best case is (n)
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int c=1;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;

                c=0;
            }
        }
        if(c){         // we have used this to reduce time complexity if the array is already sorted.
                        // which is also known as best case
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}