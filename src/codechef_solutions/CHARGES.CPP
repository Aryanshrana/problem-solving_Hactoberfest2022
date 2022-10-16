#include <bits/stdc++.h>
using namespace std; 

#define ll long long int
typedef unsigned long long u;

#define all(x)           (x).begin(), (x).end() 
#define endl             "\n"
#define line             cout<<endl
#define space            cout<<"  "

#define deb1(x)          cout << #x << " = " << x << endl
#define deb2(x, y)       cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deb3(x, y, z)    cout << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << endl

#define PI                3.1415926535897932384626
#define F                 first
#define S                 second
#define pb                push_back
#define clr(x)            memset(x, 0, sizeof(x))
#define out(n)            printf("%d\n",n)
#define IOS               ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const unsigned int mod = 1000000007;

ll lcm(ll a,ll b){    return (a/__gcd(a,b))* b ; }
vector<ll> sieve(1000010,1);
void func(){
    sieve[1] = 0;
    int n = sieve.size();
    for (int p=2; p*p<=n; p++) 
    { 
        if (sieve[p] == 1) 
        { 
            for (int i=p*p; i<=n; i += p) 
                sieve[i] = 0; 
        } 
    } 
}


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout);
    #endif
     
    IOS; 
  
    int test=1;
    cin>>test;
    while(test--){
        int n,k;    cin>>n>>k;
        string s;
        cin>>s;
        vector<int> a(k);
        for(int i=0; i<k; i++){  
            cin>>a[i];
        }
        int sum = 0;
        vector<int> temp;
        for(int i=1;i<n;i++){
            if(s[i-1] == s[i]){
                sum += 2;
                temp.push_back(2);                
            }
            else{
                sum++;
                temp.push_back(1);
            }
        }
        // cout<<sum<<endl<<endl;
        for(int i=0; i<k; i++){
            int ind = a[i]-1;
            if(s[ind] == '1')   
                s[ind]='0';
            else
                s[ind]='1';

            if(ind>0){
                sum -= temp[ind-1];

                if(s[ind-1] == s[ind]){
                    sum += 2;
                    temp[ind-1]=2;                
                }
                else{
                    sum++;
                    temp[ind-1]=1;
                }

            }
            if(ind<n-1){
                sum -= temp[ind];
                if(s[ind+1] == s[ind]){
                    sum += 2;
                    temp[ind]=2;                
                }
                else{
                    sum++;
                    temp[ind]=1;
                }
            }        
            cout<<sum<<endl;    
        }
    }
    return 0;
}



        
        
