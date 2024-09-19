#include<bits/stdc++.h>
using namespace std;

void moveZero(int arr[],int n){   
   int i;
for( i=0;i<n;i++){
    if(arr[i]==0){
        break;
    }
}

for(int j=i+1;j<n;j++){
if(arr[j]!=0&&arr[i]==0){
    int t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;
    i++;
}
}
for(int i=0;i<n;i++){
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

    moveZero(arr,n);
}