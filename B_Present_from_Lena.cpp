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
    int n;
    cin>>n;
    for(int i=0 ; i<= n;i++) {
        for(int j=0;j < n-i; j++) {
            cout<< "  ";
        }

        for(int j = 0; j<=i;j++) {
            cout<<j ;
            if(!(j==0&&i==0)){
                cout<<" ";
            }
            // if(j!=i){
            //     cout<<" ";
            // }
        }

        for(int j =i-1;j>=0;j--) {
            cout<<j ;
              if(j!=i){
                cout<<" ";
            }
        }

        cout<<"\n";
    }

    for(int i= n -1;i>= 0;i--) {
        for(int j= 0; j< n - i; j++) {
            cout <<"  ";
        }

        for(int j = 0; j<=i;j++) {
            cout<<j;
             if(!(j==0&&i==0)){
                cout<<" ";
            }
        }

        for(int j=i -1; j>=0;j--) {
            cout<<j;
             if(j!=i){
                cout<<" ";
            }
        }

        cout<<"\n";
 


    }

}


int main(){
	   fastio    
srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    cout<<setprecision(15);
    #ifndef ONLINE_JUDGE 
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
    #endif
    //in{

	solve();



// }
return 0;
}
//This is krishna.


