#include<bits/stdc++.h>
using namespace std;

# define fastio      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
# define ll long long
# define lld long double
# define pb push_back 
# define vi vector<int>
# define vc vector<char>
# define vl vector<ll>
# define ump unordered_map
# define uset unordered_set
# define mset multiset
# define minA(v) *min_element(v.begin(),v.end())
# define maxA(v) *max_element(v.begin(),v.end())
# define st(v) sort(v.begin(),v.end())
# define fin for(int i=0;i<n;i++)
# define in int t; cin>>t; while(t--)
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
  uniform_int_distribution<int> uid(0,lim-1);
  return uid(rang);
}



void solve(){
ll n,k;
cin>>n>>k;
vl v;
vl pr, po;
ll sum = 0;
fin{
    ll x;
    cin>>x;
    sum+=x;
    v.pb(x);
}
st(v);
ll x=v[0];
for(int i=0;i<n;i++){
    pr.pb(x);
    x+=v[i+1];
}


reverse(v.begin(),v.end());
 x = v[0];
for(int i=0;i<n;i++){
      
    po.pb(x);
    x+=v[i+1];
}
ll ans = 0;
for(int i=0;i<k+1;i++){
    int x = i ;
    int y = k-i;
    ll cur= 0;
    if(y!=0)
        cur = po[y-1];
    if(x!=0)
        cur+=pr[2*x-1];
    ans = max(ans , sum-cur);
}


cout<<ans<<"\n";


}


int main(){
	   fastio    
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout<<setprecision(15);
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    in{

	solve();



}
return 0;
}
//This is krishna.


