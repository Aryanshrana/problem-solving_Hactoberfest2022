#include "bits/stdc++.h"
using namespace std;
 

#define int         long long
#define endl        '\n'
#define all(x)      x.begin(), x.end()

const int mod = 1e9 + 7;


vector<pair<int, int>>v;

void solve(int _tc)
{

    int n;
    cin >> n;

    vector<bool>taken(n, false);

    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(all(a), greater<int>());

    vector<int>res;
    res.push_back(a[0]);
    taken[0] = true;

    set<int, greater<int>>st;
    for(int i = 0; i < 31; i++){
        if((1 << i) & a[0]) continue;
        st.insert(i);
    }

    for(int i = 1; i <= 32; i++){
        int cur = 0, ind = 0;
        for(int j = 1; j < n; j++){
            int c = 0;
            for(auto e: st){
                if((1 << e) & a[j]) c |= (1 << e);
            }
            if(c > cur){
                cur = c;
                ind = j;
            }
        }
        for(int ii = 0; ii < 31; ii++){
            if((a[ind] & (1 << ii))) st.erase(ii);
        }
        if(taken[ind] == false) res.push_back(a[ind]);
        taken[ind] = true;
    }

    for(int i = 0; i < n; i++){
        if(taken[i] == false) res.push_back(a[i]);
    }

    for(auto e: res) cout << e << ' ';
    cout << endl;

    

    


    













}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;

    for(int _tc = 1; _tc <= t; _tc++)
    {
        // cout << "Case #"<< _tc << ": ";    
        solve(_tc);
    }
    return 0;
}

