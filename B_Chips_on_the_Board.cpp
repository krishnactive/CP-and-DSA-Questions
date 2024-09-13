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

void solve(){
ll n;
cin>>n;

vl a,b;
fin{
    ll x;
    cin >> x;
    a.pb(x);

}
fin{
    ll x;
    cin >> x;
    b.pb(x);
}
ll aa=minA(a);
ll bb=minA(b);
ll y= min(minA(a),minA(b));
ll ans=0;
fin{
    ans+=bb;
    ans+=a[i];
}
ll ans2=0;
fin{
    ans2+=aa;
    ans2+=b[i];
}
cout<<min(ans,ans2)<<"\n";
// cout<<ans2<<"\n";
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


