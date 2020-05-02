#include<bits/stdc++.h>
#include <string>
using namespace std;

bool comp(int a, int b) 
{ 
    return (a < b); 
} 

int main(){

	int n = 0, maxx = 0, maxy = 0;

	cin >> n;

	int cordx[n+100];
	int cordy[n+100];

	memset(cordx, 0, sizeof(cordx));
	memset(cordy, 0, sizeof(cordy));

	for(int i = 0; i < n; i++)
		scanf("%d %d", &cordx[i], &cordy[i]);


	for(int i = 0; i < n; i++)
		cout << cordx[i] << " " << cordy[i] << endl;

	maxx = max_element(cordx, cordx + n, comp);

	cout << maxx << endl;

	maxy = max_element(cordx, cordx + n, comp);

    cout << maxy << endl;

	return 0;
}