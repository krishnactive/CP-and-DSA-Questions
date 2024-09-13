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
# define fi(n) for(int i=1;i<11;i++)
# define in int t; cin>>t; while(t--)

void solve(){
vector<vector<int>> v;
int n=10;
ll ans=0;
fi(n){
    for(int j=1;j<=n;j++){
        int x;
        cin>>x;
        v[i].pb(x);
    }
}
fi(n){
    for(int j=1;j<=n;j++){
        if(v[i][j]=='X'){
            if(i<=5){
            if(j<=5) ans+=min(i,j);
            else ans+=min(i,11-j);
            }
        else{
            if(j<=5)
            ans+=min(j,11-i);
            else{
                ans+=min(11-i,11-j);
            }
        }
        }
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


