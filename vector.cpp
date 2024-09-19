#include<bits/stdc++.h>
#include<vector> // contains vector stl
using namespace std;

int main(){

vector<int>v(5);

vector<int>::iterator i;
for(i=v.begin();i!=v.end();i++){
    cout<<*i<<" ";
}
cout<<endl;
v.push_back(2);
v.emplace_back(5);  // this is same as push_back but faster
for(i=v.begin();i!=v.end();i++){
    cout<<*i<<" ";
}
cout<<endl;

vector<int>::reverse_iterator j;

for(j=v.rbegin();j!=v.rend();j++){    // reverse printing 
    cout<<*j<<" ";
}

cout<<endl;

for(auto i:v){  // for each loop
cout<<i<<" ";
}

cout<<endl;

vector<int>v2(100,5);
sort(v2.begin(),v2.end()); // this takes O(nlog(n)) time complexity
for(i=v2.begin();i!=v2.end();i++){
    cout<<*i<<" ";
}

cout<<endl;

vector<int>v3{5,100};
for(auto i:v3){  // for each loop
cout<<i<<" ";
}
cout<<v3.at(0)<<" "<<v3[1]<<endl;

vector<pair<int,int>>v4;

v4.push_back({3,4});
v4.emplace_back(6,8);  // no need to use curly braces in this. because emplace automatically consider it as pair
for(auto i:v4){  // for each loop
cout<<i.first<<" "<<i.second<<"   ";
}

vector<int>v5(v3);
for(auto i:v5){  // for each loop
cout<<i<<" ";
}
vector<int>::iterator k=v5.begin();
v5.erase(k);   // erase(start,end);   start and end are iterators

for(auto i:v5){  // for each loop
cout<<i<<" ";
}

// v.insert(iterator, number of value, value)

vector<int>v6(4,10);
v6.insert(v6.begin()+1,2,30);
for(auto i:v6){  // for each loop
cout<<i<<" ";
}

vector<int>v7={2,3,4};

// insert operation in vector has higher time complexity
v6.insert(v6.begin(),v7.begin(),v7.begin()+2); // insert(start1,start2,end2) end2 is exclusive
cout<<endl;
for(auto i:v6){  // for each loop
cout<<i<<" ";
}
cout<<endl;
cout<<v6.size()<<endl;
cout<<v6.capacity()<<endl;

cout<<v6.empty()<<endl;  // returns whether vector is empty or not
v6.clear();     //  deletes all element

cout<<v6.empty()<<endl;  // returns whether vector is empty or not


vector<int>vv(3,25);
vector<int>vw(4,20);
for(auto i:vv){  // for each loop
cout<<i<<" ";
}
cout<<endl;
for(auto i:vw){  // for each loop
cout<<i<<" ";
}
vv.swap(vw);

cout<<endl;
for(auto i:vv){  // for each loop
cout<<i<<" ";
}
cout<<endl;
for(auto i:vw){  // for each loop
cout<<i<<" ";
}
vw.pop_back();
cout<<endl;
for(auto i:vw){  // for each loop
cout<<i<<" ";
}
list<int>l({3,5,2,6});
sort(l.begin(),l.end());
}
 