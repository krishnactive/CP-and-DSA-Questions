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
ll n,k,x;
ll sum=0;
cin>>n>>k>>x;
if(n<k||k>=x+2) cout<<"-1\n";
else{
    if(k==x){
        cout<<(ll) (k-1)*(k)/2 + (k-1)*(n-k)<<"\n";  
    }
    else{
    sum = (ll)(k-1)*(k)/2 + (n-k)*x;
    cout<<sum<<"\n";
    }
}


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


