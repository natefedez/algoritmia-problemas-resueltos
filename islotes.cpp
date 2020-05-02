#include<bits/stdc++.h>
#include <string>
using namespace std;

int main(){
	
	string cad;
	int len = 0, isl = 0;
	
	cin >> cad;
	
	len = cad.size();
	
	for(int i = 1; i < len - 1; i++)
		if(cad[i-1] == cad[i+1] && cad[i] != cad[i-1] && cad[i] != cad[i+1])
			isl++;
	
	cout << isl;
	
	
	return 0;
}
