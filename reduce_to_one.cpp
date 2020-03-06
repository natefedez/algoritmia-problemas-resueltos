#include<bits/stdc++.h> 
using namespace std; 

int n, int x;

void buscar_Respuesta(){

	cin >> x;

	int cont = 0, temp = x, res_temp = 0;

	for(int i = 0; i < x; i++){

		cont++;

		res_temp = (cont + temp) + (cont * temp);

		temp = res_temp;

		cout << temp << "\n";

	}

}

int main(){

	cin >> n;

	for(int i = n; i > 0; i--) buscar_Respuesta();



}