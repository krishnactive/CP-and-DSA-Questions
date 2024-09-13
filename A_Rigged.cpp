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

int solve(){
ll n;
cin>>n;
vector<pair<int,int>>v;
fin{
    ll x;
    ll y;
    cin>>x>>y;
    v.pb({x,y});
}
ll ans=v[0].first;
vector<ll>cc;
for(int i=1;i<n;i++){
    if(v[i].first>=ans){
        cc.pb(v[i].second);
    }
}

ll ch=v[0].second;
for(int i=0;i<cc.size();i++){
    if(ch<=cc[i]){
        cout<<"-1\n";
        return 0;
    }
}
cout<<ans<<"\n";
return 0;

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


