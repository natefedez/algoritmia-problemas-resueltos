#include<bits/stdc++.h> 
using namespace std; 

string geroglifico;
long long int largo = 0, unos = 0, resultado = 0;

int main(){

	cin >> geroglifico;

	largo = geroglifico.length();

	for(int i = 0; i < largo; i++) if(geroglifico[i] == '1') unos++;

	resultado = ((unos * (unos + 1)) / 2);

	cout << resultado << endl;

	return 0;

}