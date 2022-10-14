// Problem Link: https://www.codechef.com/problems/ENDSORTED

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pp pop_back
#define Vec vector<long long int>
const long long int MOD = 1e9+7;
void solve(){
    int n;
    cin>>n;
    ll ans=0;
    ll index_1;
    ll index_n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==1) index_1=i;
        if(v[i]==n) index_n=i;
    }
    if(v[0]==1 && v[n-1]==n){
        ans=0;
    }else if(v[0]==1 && v[n-1]!=n){
        ans=n-1-index_n;
    }else if(v[0]!=1 && v[n-1]==n){
        ans=index_1;
    }else{
        ans=n-1-index_n+index_1;
        if(index_n<index_1){
            ans-=1;
        }
    }
    cout<<ans<<"\n";
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