#include <bits/stdc++.h>
using namespace std;

int mod = 11092019;

int main() {

	string s;
	map <char, int> mapa;

	cin >> s;

	int n = s.size();
	int ans = 0;

	for (int i = 0; i < n; i++)
		mapa[s[i]]++;

	vector<int> v;

	v.push_back(1);

	for(auto it=mapa.begin(); it!=mapa.end(); it++){

		int l = it->second;

		v.push_back((v[v.size()-1]*l)%mod);

		for(int i=v.size()-2;i>0;i--){

			v[i]=(v[i]%mod)+(v[i-1]*l)%mod;

			v[i]=v[i]%mod;
		}
	}
	for(int i = 0; i <= mapa.size() && i < v.size(); ++i){

		ans+=v[i]%mod;
		
		ans=ans%mod;
	}
	cout << ans << endl;

}