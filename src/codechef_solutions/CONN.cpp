// Problem Link: https://www.codechef.com/START47D/problems/CONN


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define Vec vector<long long int>
const long long int MOD = 1e9+7;
void solve(){
    ll n;
    cin>>n;
    if(n==7 || n==0){
        cout<<"YES"<<"\n";
        return;
    }else if(n<7 && n%2==0 || n>7 && n%2==0 || n>7 && n%7==0){
        cout<<"YES"<<"\n";
        return;
    }else if(n<7 && n%2!=0){
        cout<<"NO"<<"\n";
        return;
    }else{
        for(ll i=0;i<=n;i++){
            ll temp=n;
            temp=temp-(2*i);
            if(temp%7==0){
                cout<<"YES"<<"\n";
                return;
            }
        }
    }
    cout<<"NO"<<"\n";
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}