#include<bits/stdc++.h>
using namespace std;

// hashing using array
// we can declare integer array maximum size of 10^6 inside main and 10^7 globally i.e, outside main
// we can declare boolean array maximum size of 10^7 inside maion and 10^8 gloablly, i.e, outside main

// if an element in the given array is greater than the following size then we have to use map or unordered map
int main()
{

    // character hashing
string a;
cin>>a;

int n=a.length();
// this is known as pre calculation or pre storing
int arr[256]={0};  // there are 256 ascii characters.
             // suppose if we wanted to do hashing for only capital alphabets then the logic would be
             // int arr[26]={0};
             // for(int i=0;i<n;i++){
             //arr[a[i]-65]++;
             //}

for(int i=0;i<n;i++){
    arr[a[i]]++;
}

int k;
cin>>k;

// this is fetching
while(k>0){
char c;
cin>>c;
cout<<arr[c];
    k--;
}


}