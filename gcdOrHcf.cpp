#include<bits/stdc++.h>
using namespace std;


int main(){

int a,b;
cin>>a>>b;
                 // this algorithm uses euclidian formula that is, gcd(a,b)=gcd(a-b,b) or gcd(a,b)=gcd(a%b,b)
                 //     where a is greater than b.  we do this step again and again until one of the number
                 // becomes 0 then the other number is the gcd of the two number
while(a>0&&b>0){    // this has time complexity:- O(logx(min(a,b)))

if(a>b) a=a%b;  
else b=b%a;

}
if(a==0) cout<<b;
else cout<<a;

}