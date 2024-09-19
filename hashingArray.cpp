#include<bits/stdc++.h>
using namespace std;

// hashing using array
// we can declare integer array maximum size of 10^6 inside main and 10^7 globally i.e, outside main
// we can declare boolean array maximum size of 10^7 inside main and 10^8 globally, i.e, outside main

// if an element in the given array is greater than the following size then we have to use map or unordered map
int main()
{

    // integer hashing
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];

// this is known as pre calculation or pre storing
int arr[10000]={0};

for(int i=0;i<n;i++){
    arr[a[i]]++;
}

int k;
cin>>k;

// this is fetching
while(k>0){
int c;
cin>>c;
cout<<arr[c];
    k--;
}


}