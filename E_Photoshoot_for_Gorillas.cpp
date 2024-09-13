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
    int n,m,k;cin>>n>>m>>k;
    int w; cin>>w;
    vi a;fin(a,w);
    ll ans = 0;
    vi b;
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            ll lx = max(1ll,i-k+1), hx= min(i,n-k+1);
            ll ly = max(1ll, j-k+1), hy = min(j,m-k+1);
            b.push_back((hx-lx+1)*(hy-ly+1));
        }
    }
    sort(begin(a),end(a));
    reverse(begin(a),end(a));
    sort(begin(b),end(b));
    reverse(begin(b),end(b));

    for(int i=0;i<w;i++){
        ans+=a[i]*b[i];
    }

    cout<<ans<<"\n";
  

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
