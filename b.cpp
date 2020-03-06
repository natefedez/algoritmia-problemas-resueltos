#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define foru(i,a,b) for(int i=(a); i<(b); i++)
#define forue(i,a,b) for(int i=(a); i<=(b); i++)
#define forb(i,n) for(int i=n-1; i>=0; i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();++it)
#define pb push_back
#define fst first
#define snd second
#define pt(x) cout << x << "\n"
#define sz(c) ((int)c.size())
#define add(a, b, w) g[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;

ll dp[21000][250];
ll l;

ll solve(ll suma, ll i){
    if(dp[suma][i] != -1) return dp[suma][i]%1000000007;
    if(i == l) return 0;
    
    if(suma-i == 0) dp[suma][i] = 1;
    else  if(suma-i < 0) dp[suma][i] = 0;
    else{
        ll x1 = solve(suma-i,i+1);
        ll x2 = solve(suma,i+1);
        ll r = (x1+x2)%1000000007;
        dp[suma][i] = r;
    }
    return dp[suma][i]%1000000007;
    
}


int main(){
    ll x,y;
    foru(i,0,21000){
        foru(j,0,250){
            dp[i][j] = -1;
        }
    }
    ll q; scanf("%lld",&q);
    while(q--){
        scanf("%lld %lld",&l,&x);
        l++;
        printf("%lld\n",solve(x,1)%1000000007);
     
        
    }
    
    


}
