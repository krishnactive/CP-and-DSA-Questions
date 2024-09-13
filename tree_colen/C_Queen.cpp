#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define lld long double
#define pb push_back
#define vi vector<int>
#define vc vector<char>
#define vl vector<ll>
#define ump unordered_map
#define uset unordered_set
#define mset multiset
#define minA(v) *min_element(v.begin(),v.end())
#define maxA(v) *max_element(v.begin(),v.end())
#define st(v) sort(v.begin(),v.end())
#define fin(a,n) for(int i=0;i<n;i++){ll x; cin>>x;a.pb(x);} 
#define f(n) for(ll i=0;i<n;i++)
#define f1(n) for(ll i=1;i<n;i++)
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define min fmin
#define max fmax
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve() {
    ll n;
    cin>>n;
    vector<int> c(n);
    vector<int> children[n];
    for(int i = 0;i<n;i++){
        int x;
        cin>>x>>c[i];
        if (x!=-1){
            --x;
            children[x].push_back(i);
        }
    }
    vector<int> ans;

    for(int i=0;i<n;i++){
        if(c[i] == 1){
            bool pos = 1;
            for(int x:children[i]){
                if(c[x] == 0){
                    pos = 0;
                    break; 
                }
            }
            if(pos){
                ans.push_back(i+1);
            }
        }
    }

    if(ans.size()>0){
        for(int x:ans)cout<<x<<" ";
    }
    else{
        cout<<-1<<"\n";
    }
    
    

}

signed main() {
    // fastio
    // srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    // cout << setprecision(15);

    // #ifndef ONLINE_JUDGE 
    //     freopen("input1.txt", "r", stdin);
    //     freopen("output1.txt", "w", stdout);
    // #endif
    
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
