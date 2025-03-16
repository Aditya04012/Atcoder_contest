#include<bits/stdc++.h>
using namespace std;
#define ll long long

void proof(){
int n,m,x;
cin>>n>>m>>x;

vector<ll>adj[n+1],adjT[n+1];
for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adjT[v].push_back(u);
}


priority_queue<pair<ll,pair<ll,ll>>,vector<pair<ll,pair<ll,ll>>>,greater<pair<ll,pair<ll,ll>>>>pq;
vector<vector<ll>>dist(n+1,vector<ll>(2,1e18));
//dist[node][reversed]
dist[1][0]=0;
dist[1][1]=x;

//dist,node,reversed
pq.push({0,{1,0}});
pq.push({x,{1,1}});

while(!pq.empty()){
    auto [d,sec]=pq.top();
    auto [node,reverse]=sec;
    pq.pop();
    
    
    if(reverse==0){
        
        for(auto it:adj[node]){
            if(d+1<dist[it][reverse]){
                dist[it][reverse]=d+1;
                pq.push({d+1,{it,0}});
            }
        }
        
        for(auto it:adjT[node]){
            if(d+1+x<dist[it][reverse]){
                dist[it][reverse]=d+1+x;
                pq.push({d+1+x,{it,1}});
            }
        }
        
        
    }else{
        for(auto it:adjT[node]){
            if(d+1<dist[it][reverse]){
                dist[it][reverse]=d+1;
                pq.push({d+1,{it,1}});
            }
        } 
        
        for(auto it:adj[node]){
            if(d+1+x<dist[it][reverse]){
                dist[it][reverse]=d+1+x;
                pq.push({d+1+x,{it,0}});
            }
        }
        
    }
    
   
}



 cout<<min(dist[n][0],dist[n][1]);

  
}
int main(){
    int t=1;
    //cin>>t;
    
    while(t--){
        proof();
    }
    return 0;
}