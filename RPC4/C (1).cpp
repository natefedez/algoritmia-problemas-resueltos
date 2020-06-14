


#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
#define MOD 1000000007
#define pt(x) cout << x << "\n"
#define add(a, b, w) edges[a].pb(make_pair(b, w))
typedef pair<int,int> ii;
typedef long long int ll;
//static_cast<double>

vector<vector<int>> g;
int v[100005];

void imp(int n){
	for(int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

int main(){
	
	//freopen("input.in", "r", stdin);
    //cin.tie(0);
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,m;
	int a,b;
	cin >> n >> m;
	g = vector<vector<int>>(n);
	for(int i=0; i <n;i++) v[i] = INF;
	for(int i = 0; i < m; i++){
		cin >> a >> b;
		a--; b--;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	
	queue<int> q;
	
	
	q.push(0);
	v[0] = 0;
	
	while(!q.empty()){
		
		int actual = q.front();
		
		q.pop();
	
		int l = g[actual].size();
		for(int i = 0; i < l; i++){
			int peso = v[actual];
			peso++;
			
			if(peso < v[g[actual][i]]){
				v[g[actual][i]] = peso;
				q.push(g[actual][i]);
			}
		}
	}
	
	pt(v[n-1]-1);
	
	
}





