#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mod = 11092019;

int main() {

	string s;
	map <char, int> mapa;

	cin >> s;

	ll n = s.size();

	for (int i = 0; i < n; i++)
		mapa[s[i]]++;

	vector<int> v;

	v.push_back(1);

	for(map<char,int>::iterator it=mapa.begin(); it!=mapa.end(); it++){

		ll l = it->second;

		v.push_back((v[v.size()-1]*l)%mod);

		for(ll i=v.size()-2;i>0;i--){

			v[i]=(v[i]%mod)+(v[i-1]*l)%mod;

			v[i]=v[i]%mod;
		}
	}
	ll r = 0;
	for(ll i = 0; i <= mapa.size() && i < v.size(); ++i){

		r+=v[i]%mod;
		
		r=r%mod;
	}
	cout << r << endl;

}
