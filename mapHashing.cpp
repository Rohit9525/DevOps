#include<bits/stdc++.h>
using namespace std;

int main(){
// integer hashing using map
map<char,int>m;  // key can be anything in the map. either int, char, string or pair, vector
                // time complexity of map in all cases is logn
                // keys are ordered in ascending order in map
                // but in unordered map key can't be pair or vector.
                // unordered map is faster than map
                // time complexity of unordered map
                /// best and average case- (1)
                // worst case- O(n)  due to collision
                // space complexity of map and unordered map is O(n)
string n;
cin>>n;
for(int i=0;i<n.length();i++){
    
m[n[i]]++;

}

for(auto i:m){
    cout<<i.first<<"->"<<i.second<<endl;
}
int c;
cin>>c;
while(c>0){
    char p;
    cin>>p;
    cout<<m[p]<<" ";
    c--;
}

    return 0;
}