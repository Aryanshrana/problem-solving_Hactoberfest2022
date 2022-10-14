// problem : https://www.codechef.com/JULY222D/problems/BURGERS2 
// solution :  
#include <iostream>
using namespace std;

int main() {
	// your code goes here 
	int T; 
	cin>>T; 
	while(T--) 
	{ 
	    int X,Y,N,R; 
	    cin>>X>>Y>>N>>R; 
	    if(R/Y>=N) 
	    { 
	        cout<<"0 "<<N<<endl; 
	        
	    } 
	    else if(R/X<N) 
	    cout<<"-1"<<endl; 
	    else 
	    { 
	        int k=(R-(Y*N))/(X-Y); 
	        if((R-(Y*N))%(X-Y)!=0) 
	        k=k+1; 
	        cout<<k<<" "<<N-k<<endl;
	    }
	}
	return 0;
}
