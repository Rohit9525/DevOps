#include<bits/stdc++.h>
#include<utility> // contains pair stl
using namespace std;

int main(){

pair<int,int> p;

p.first=10;
p.second=7;
cout<<p.first<<" "<<p.second<<endl;

pair<char,int>b;
b.first='a';
b.second=10;
cout<<b.first<<" "<<b.second<<endl;

pair<int,int>c={3,4};
cout<<c.first<<" "<<c.second<<endl;

pair<int,int> d[]={{3,4},{6,7}};
cout<<d[0].first<<" "<<d[0].second;
cout<<endl;
cout<<d[1].first<<" "<<d[1].second;
}
