#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
         
    int t;
    cin>> t;
    
    while(t--){
        
       int a,b,c;
       cin>> a>> b>> c;
       
       int ans=-1;
       
       for(int i=0;i<=100;i++){
           
           int dis=min(100,i*a);
           
           double cal= b * (100-dis) / 100.0;
           
           int left=c-i;
           
           if(cal<=left){
               ans=i;
               break;
           }
       }
       
      cout<<ans<<endl;
        
    }
}
