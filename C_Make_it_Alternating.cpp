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
# define c 998244353
bool pass = true;
ll mult( ll n ,ll r ){
    ll ans = 1;
    for(ll i = n; i > r; i--){
        ans*=i;

    }

    return ans%c ; 
}
ll fac(ll r){
    ll ans = 1;
    for(ll i=1;i<=r;i++){
        ans*=i;
       
    }
return ans%c;
}



void solve(){
string s;
cin>>s;
ll n=s.size();
s.pb('2');
ll cnt=1;
ll ans=0;
vector<ll>fa;
for(int i=0;i<=n;i++){
    if(s[i]==s[i+1]){
        cnt++;
    }
    else{
        fa.pb(cnt);
        cnt=1;
    }
}
ll ab=0;
for(ll i=0;i<fa.size();i++){
    ab--;
    ab+=fa[i]%c;
    
}
ll pr = 0 ;
for(auto x:fa){
    if(x>1)
    pr+=fac(x);
}
if(pr == 0) pr++;
cout<<ab<<" "<<pr<<"\n";

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


