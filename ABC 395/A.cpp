#include<bits/stdc++.h>
using namespace std;
void proof(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1])cout<<"No",exit(0);
    }
    cout<<"Yes";
    
}
int main(){
    int t=1;
    //cin>>t;
    
    while(t--){
        proof();
    }
    return 0;
}