// Problem link https://www.codechef.com/submit/NOTUNIT
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,ans=0;
	    cin>>a>>b;
	   if(b-a>=3){
	       if(a%2==0) cout<<a<<" "<<a+2<<endl;
	       else if(a%3==0) cout<<a<<" "<<a+3<<endl;
	       else cout<<a+1<<" "<<a+3<<endl;
	   }
	   else if(b-a==2){
	       if(a%2==0) cout<<a<<" "<<a+2<<endl;
	       else cout<<-1<<endl;
	   }
	   else cout<<-1<<endl;
	}
	return 0;
}
