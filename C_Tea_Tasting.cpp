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
    vl a(n), b(n);
    f(n) cin>>a[i];
    f(n) cin>>b[i];
    vl pre(n+1,0);
    f(n) pre[i+1] = pre[i] + b[i];
    vl diff(n+2, 0);
    vl ans(n+1, 0);
    for(int j=1;j<=n;j++){
        ll s = a[j-1];
        ll x = s+pre[j-1];
        
        int k = upper_bound(pre.begin(), pre.end(), x) - pre.begin()-1;

        diff[j]++;
        diff[k+1]--;
        if(k<n){
            ll rem = s- (pre[k]-pre[j-1]);
            ans[k+1] += rem;
        }
    }
    vl cnt(n+1,0);
    int c = 0;
    for(int i=1;i<=n;i++){
        c += diff[i];
        cnt[i] += c;
    }
    for (int i = 1; i <= n; i++){
        long long total = ans[i] + cnt[i] * b[i-1];
        cout << total << (i == n ? "\n" : " ");
    }
  

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
// again starting
