#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
         
    int t;
    cin>> t;
    
    while(t--){
        
      int n;
      cin>> n;
      string s;
      cin>>s;
      
      int z=count(s.begin(),s.end(),'0');
      
      int o=n-z;
      
      int ans=0;
      
      for(int i=1;i<=n;i++){
          
          if( ( i>=o && (i-o)%2==0 ) || ( i>=z && (i-z)%2==0 ) ) ans++;
          
      }
      
      cout<<ans<<endl;
      
      
        
    }
}
