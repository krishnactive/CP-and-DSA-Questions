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
#define int long long
#define min fmin
#define max fmax
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}

vector<vector<int>>dir={{0, 1},{0, -1},{1, 0}, {-1, 0}};

void solve() {
    int n;
    cin >> n;
    deque<pair<int, int>>q;
    q.push_back({0,0});
    vector<vector<int>> l1(2,vector<int>(n, 0));
    l1[0][0] = 1;

    vector<string> l(2);
    for (int i = 0; i<2;i++)
        cin >> l[i];
    while (!q.empty()) {
        pair<int, int>cur=q.front();
        q.pop_front();
        int x =cur.first;
        int y =cur.second;
        if (x==1&& (y==n - 1)){
            cout<<"YES\n";
            return;
        }
        for(auto d :dir){
            int nx = x+d[0];
            int ny =y+d[1];
            if(0<=nx&& nx<2&&0<=ny&&ny<n) {
                if (l[nx][ny] == '<')ny-=1;
                else{
                    ny+=1;
                }
                if (l1[nx][ny] ==1)continue;
                l1[nx][ny] =1;
                q.push_back({nx, ny});
            }
        }
    }
cout<<"NO\n";
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
