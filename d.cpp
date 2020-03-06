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

ll calc(ll n){
    return n*(n+1)/2;
}

int main(){
    
    ll x,y;
    while(scanf("%lld %lld",&x,&y) && x && y){
        
        if(y == 1){
            if(x%2 == 0){
                printf("%lld\n",calc(x));
            }
            else{
                printf("%lld\n",(calc(x-1) + 1));
            }
        }
        else{
            ll resp;
            if((x+y-1)%2){
                resp = (calc(x+y-2) + 1) + (y-1);
            }
            else{
                resp = calc((x+y-1)) - (y-1);
            }
            printf("%lld\n",resp);
        }
    }
    
    


}
