#include<bits/stdc++.h>
using namespace std;
void proof(){
    int n;
    cin>>n;
   vector<vector<char>>grid(n+1,vector<char>(n+1,'#'));
   
   for(int i=1;i<=n;i++){
       for(int j=n-i+1;j>0;j--){
            if(i>j)continue;
            
            char color=(i%2==1)?'#':'.';
            
            for(int r=i;r<=j;r++){
                for(int c=i;c<=j;c++){
                    grid[r][c]=color;
                }
            }
       }
   }
   
   for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
           cout<<grid[i][j];
       }
       cout<<endl;
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