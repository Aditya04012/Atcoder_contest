#include <iostream>
  #include <fstream>
  #include<bits/stdc++.h>
  #define ll long long
  using namespace std;
  #include<bits/stdc++.h>
  int mod=1e9;
  const ll inf = 1000000000000000000LL;


#include <bits/stdc++.h> 



  void proof(){
      int n;
      cin>>n;

      vector<int>arr(n);
      for(int i=0;i<n;i++)cin>>arr[i];

    sort(arr.begin(),arr.end());
      
      int sum=0;
      for(int i=0;i<n;i++){
        sum+=arr[i];
      }

      if(sum%10!=0){
        cout<<sum<<endl;
        return;
      }
  
      //koi bhi min ek ele jo usme non div by 10 bana de
      int mini=101;
      for(int i=0;i<n;i++){
        if((sum-arr[i])%10!=0 && arr[i]<mini){
          cout<<sum-arr[i];
          return;
        }
      }
     cout<<0;
    


    }


 
  int main() {
   
    int t;
    t=1;
      
   
    while(t--){
      proof();
    }
 
 
      return 0;
  }