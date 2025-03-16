#include<bits/stdc++.h>
using namespace std;
void proof(){
    int n;
    cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++)cin>>arr[i];
   
   int i=0;
   map<int,int>mpp;
   int mini=INT_MAX;
   for(int j=0;j<n;j++){
       mpp[arr[j]]++;
        
       
       while(j-i+1>mpp.size()){
           mini=min(mini,j-i+1);
           mpp[arr[i]]--;
           if(mpp[arr[i]]==0)mpp.erase(arr[i]);
           i++;
       }
       
   }
   if(mini==INT_MAX)cout<<-1;
   else cout<<mini;
    
}
int main(){
    int t=1;
    //cin>>t;
    
    while(t--){
        proof();
    }
    return 0;
}