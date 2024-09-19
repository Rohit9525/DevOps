#include<bits/stdc++.h>
using namespace std;

bool pallin(int i,string s){
    int n=s.length();
if(i>n/2){
    return true;
}
if(s[i]!=s[n-i-1]){
    return false;
}
return pallin(i+1,s);

}

int main(){
string s;
cin>>s;
cout<<pallin(0,s);

    return 0;
}