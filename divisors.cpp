#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    set<int>s;
    for(int i=1;i*i<=n;i++){     // time complexity is O(sqrt(n))
        if(n%i==0){
            //cout<<i<<" ";
            s.insert(i);
    if(n/i!=i){
        //cout<<n/i<<" ";
        s.insert(n/i);
    }
    }
}
for(auto i:s){      // set stored data in sorted order and each elemnt is unique. no duplicacy is there
    cout<<i<<" ";
}
// if we want to print in sorted order we have to use data structure such as vector and sort them. 
return 0;

}