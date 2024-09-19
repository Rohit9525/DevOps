#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int cnt=(int)(log10(n)+1);   // time complexity is O(log10(n)). where n is the number

    cout<<cnt<<endl;
}

int count(int n){
        int cn=0;
    while(n>0){          // using this approach also the time complexity is same i.e, O(log10(n)) 
        n/=10;            // for eg:- if we would have been divided n by 2 then it is O(log2(n)) 
        cn++;
    }
    return cn;
}