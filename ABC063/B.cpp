#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


void solve()
{
string s;
cin>>s;

vector<int>hash(26,0);

for(auto it:s){
  hash[it-'a']++;
}


for(int i=0;i<26;i++){
  if(hash[i]>1){
    cout<<"no";
    return;
  }
}

cout<<"yes"<<endl;
}
 
  int main() {
  
    int t;
    t=1;
      
   
    while(t--){
     solve();
    }
 
 
      return 0;
  }