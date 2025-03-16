#include<bits/stdc++.h>
using namespace std;
                                         /*APPROCH 1  */
/**
 * TIME COMPLEXITY=O(N*Q*K)
 * SPACE COMPLEXITY=O(mapp ,(N+Q))
 * 
 * q==1 tc-O(n*k)
 * q==2 tc-O(1)
 * q==3 tc-O(n*k)
 */


int search(map<int,vector<int>>& mpp, int pg, int n) {
    for(int i = 1; i <= n; i++) {
        if (find(mpp[i].begin(), mpp[i].end(), pg) != mpp[i].end()) {  
            return i;
        }
    }
    return -1;
}

void proof(){
    int n,m;
  cin>>n>>m;
  
  map<int,vector<int>>mpp;
  for(int i=1;i<=n;i++){
      mpp[i].push_back(i);
  }
  
  vector<int>ans;
  
  for(int i=0;i<m;i++){
    int q,a,b;
    cin>>q>>a;
    if(q==1){
        cin>>b;
         int nest=search(mpp,a,n);
         mpp[nest].erase(remove(mpp[nest].begin(), mpp[nest].end(), a), mpp[nest].end());

         mpp[b].push_back(a);
        
    }else if(q==2){
        cin>>b;
        swap(mpp[a],mpp[b]);
    }else{
       ans.push_back(search(mpp,a,n));
    }
  }
  for(auto it:ans){
      cout<<it<<endl;
  }
  
}
int main(){
    int t=1;
    //cin>>t;
    
    while(t--){
        proof();
    }
    return 0;
}


                          /**APPROCH 2 */

/**
 * TIME COMPLEXITY=O(N*Q)
 * SPACE COMPLEXITY=O(mapp ,(N+Q))
 * 
 */

 #include<bits/stdc++.h>
using namespace std;


void proof(){
    int n,m;
  cin>>n>>m;
  
  map<int,vector<int>>mpp;
  map<int,int>pos;
  for(int i=1;i<=n;i++){
      mpp[i].push_back(i);
      pos[i]=i;
  }
  
  vector<int>ans;
  
  for(int i=0;i<m;i++){
    int q,a,b;
    cin>>q>>a;
    if(q==1){
        cin>>b;
        int nest=pos[a];
        
         mpp[nest].erase(remove(mpp[nest].begin(), mpp[nest].end(), a), mpp[nest].end());

         mpp[b].push_back(a);
        pos[a]=b;
    }else if(q==2){
        cin>>b;
        swap(mpp[a],mpp[b]);
        for(auto it:mpp[a])pos[it]=a;
         for(auto it:mpp[b])pos[it]=b;

        
    }else{
       ans.push_back(pos[a]);
    }
  }
  for(auto it:ans){
      cout<<it<<endl;
  }
  
}
int main(){
    int t=1;
    //cin>>t;
    
    while(t--){
        proof();
    }
    return 0;
}


//**Approch 3  */

/*
Timecomplexity =O(M)
Space=O(N+N+N)=O(N)

*/

#include<bits/stdc++.h>
using namespace std;


void proof(){
    int n,m;
  cin>>n>>m;
  
 vector<int>pos(n+1),arr(n+1),nest(n+1);
 for(int i=1;i<=n;i++){
     pos[i]=i;
     arr[i]=i;
     nest[i]=i;
 }
 
 for(int i=0;i<m;i++){
     int q,a,b;
     cin>>q>>a;
     if(q==1){
         cin>>b;
         arr[a]=nest[b];
     }else if(q==2){
         cin>>b;
         pos[nest[a]]=b;
         pos[nest[b]]=a;
         swap(nest[a],nest[b]);
     }else{
         cout<<pos[arr[a]]<<endl;
     }
 }
  
}
int main(){
    int t=1;
    //cin>>t;
    
    while(t--){
        proof();
    }
    return 0;
}