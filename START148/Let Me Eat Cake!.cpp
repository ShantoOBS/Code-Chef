
// Code-Chef Link: https://www.codechef.com/problems/CAKEHALF

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--){
	    
	    int a,b;
	    cin>>a>> b;
	    
	    int ans=0;
	    
	    while(a!=b){
	       // cout<<a<<" "<<b<<endl;
	        if(a==b)break;
	        
	        if(a>b){
	           float temp=ceil((float)a/2);
	            ans+=temp;
	            a=a/2;
	        }
	        if(a<b){
	            float temp=ceil((float)b/2);
	            ans+=temp;
	            b=(b/2);
	        }
	        
	    }
	    
	   // cout<<a<<" "<<b<<endl;
	    
	    cout<<ans<<endl;
	}

}
