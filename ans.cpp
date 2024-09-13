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
# define fi(n) for(ll i=0;i<n;i++)
# define in ll t; cin>>t; while(t--)

// ll w=0;
bool check(ll mid, ll b, vl &v){

    ll w=0;
    for(auto &x:v){
        if(mid>x){
            w+=(mid-x);
        }
    }
  
    if(w<=b) return true;
    return false;
}



void solve(){
ll a,b;
cin>>a>>b;
vl v;
ll ans=INT_MAX;
fi(a){
    ll x;
    cin>>x;
    v.pb(x);
}
ll lo=0;
ll hi=INT_MAX;
while(hi>=lo){
    ll mid = hi-(hi-lo)/2;
    if(check(mid,b,v)){
        ans=mid;
        lo=mid+1;
    }
    else{
        hi=mid-1;
    }

}




cout<<ans<<"\n";


}


int main(){
	   fastio    
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


