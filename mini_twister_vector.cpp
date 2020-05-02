#include<bits/stdc++.h>
#include <string>
using namespace std;

int main(){

	int n = 0, paso = 0;
	map<int, pair<int,int>> axis; 

	cin >> n;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++){

			cin >> paso;
			axis.insert( make_pair( paso, make_pair( i, j)));

		}

	int casillas = n*n, total_pasos = 0;

	for(int i = 1; i < casillas; i++)
		total_pasos += abs(axis[i].first - axis[i + 1].first) 
					+ abs(axis[i].second - axis[i + 1].second);

    cout << total_pasos;

	return 0;
}