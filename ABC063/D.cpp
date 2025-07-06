#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

bool canKill(ll x,ll A,ll B,vector<ll>&arr){
  ll t=0;

  for(auto it:arr){
    ll rem=it-x*B;

    if(rem>0){
      t+=((rem+(A-B)-1)/(A-B));
    }
  }
  return t<=x;
}
void solve()
{
 ll n,A,B;
 cin>>n>>A>>B;


 vector<ll>arr(n);

 for(int i=0;i<n;i++)cin>>arr[i];


 ll low=0,high=1e9,ans=1e9;

 while(low<=high){
 ll mid=(low+high)/2;

  if(canKill(mid,A,B,arr)){
     ans=mid;
    high=mid-1;
  
  }else{
    low=mid+1;
  }
 }
 cout<<ans;
 

}
 
  int main() {
    
    int t;
    t=1;
      
   
    while(t--){
     solve();
    }
 
 
      return 0;
  }