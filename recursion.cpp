#include<bits/stdc++.h>
using namespace std;

void ascensing(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<" ";
    ascensing(i+1,n);

}

void descending(int i,int n){
    if(i>n){
        return;
    }
    descending(i+1,n);
    cout<<i<<" ";

}


int main(){
int n;
cin>>n;
ascensing(1,n);
cout<<endl;
descending(1,n);

    return 0;
}