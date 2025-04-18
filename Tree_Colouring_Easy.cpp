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
#define int long long
#define min fmin
#define max fmax
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

void solve() {
    int n;
    cin>>n;
    vector<vector<int>> adj(n+1);
    for(int i=2;i<=n;i++){
        int p ;
        cin>>p;
        adj[p].pb(i);
        adj[i].pb(p);
    }
    bool pass = (n%2==0);
    for(int i=1;i<=n&&pass;i++){
        if(adj[i].size()%2==0){
            pass = false;
        }
    }
    if(!pass){
        cout<<-1<<"\n";
        return;
    }
    vector<pair<int,int>> par;
    function<int(int,int)> dfs = [&](int u, int p)->int{
        int cand = u;
        for(int v : adj[u]){
            if(v == p) continue;
            int x = dfs(v,u);
            if(x != -1){
                if(cand == u){
                    cand = x;
                }
                else{
                    par.pb({u,x});
                    cand = -1;
                }
            }
        }
        return cand;
    };
    int left = dfs(1,-1);
    if(left != -1){
        par.pb({1,left});
    }

    if(par.size()*2 != n){
        cout<<-1<<"\n";
        return;
    }

    vector<int> col(n+1,0);
    int curc = 1;
    for(auto& p:par){
        int u = p.first;
        int v = p.second;
        col[u] = curc;
        col[v] = curc;
        curc++;
    }
    for(int i=1;i<=n;i++){
        cout<<col[i]<<" ";
    }
    cout<<"\n";
}

signed main() {
    fastio
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout << setprecision(15);

    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
// This is krishna.
