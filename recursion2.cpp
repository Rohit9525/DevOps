#include<bits/stdc++.h>
using namespace std;

//there are 2 types of recursion
// 1. parameterised   -  function just calls itself and prints output each time. it doesnot return the required output.
//2. functional - function returns the required output. it do not print the results during each call. it uses backtracking to produce result.

void parameterised(int i,int sum){
if(i<1){
    cout<<sum;
    return;
}
parameterised(i-1,sum+i);
}

int functional(int n){
    if(n==0){
        return 0;
    }
    int sum=n+functional(n-1);
    return sum;
}

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);

}

void factparameterised(int n,int fac){
    if(n==0){
        cout<<"By Parameterised approach: "<<fac;
        return;
    }
    factparameterised(n-1,fac*n);
}

int main(){
    int n;
    cin>>n;
    parameterised(n,0);
    cout<<endl<<functional(n)<<endl;
    cout<<"By Functional approach: "<<fact(n)<<endl;  
    factparameterised(n,1);
    return 0;
}