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

bool dfs(int i,int j, vector<vector<char>>& grid, vector<vector<bool>> &vis){
    int m = grid.size();
    int n = grid[0].size();
    if(i<0 || j<0 || i>=m || j>=n || vis[i][j]) return false;
    vis[i][j] = true;
    if(i == m-1 && j == n-1) return true;

    if(grid[i][j]=='R'){
        return dfs(i,j+1,grid,vis);
    }
    else if(grid[i][j]=='L'){
        return dfs(i,j-1,grid,vis);
    }
    else if(grid[i][j]=='U'){
        return dfs(i-1,j,grid,vis);
    }
    else if(grid[i][j]=='D'){
        return dfs(i+1,j,grid,vis);
    }
}


void solve() {
    
  

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
