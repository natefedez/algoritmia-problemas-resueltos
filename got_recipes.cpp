#include<bits/stdc++.h>
using namespace std;

int apariciones[40];
int n = 0, masc = 0;
long long int resp = 0;

void buscarApariciones(){
	
	string letras;
	masc = 0;

	cin >> letras;
	
	int largo = letras.length();

	for(int i = 0; i < largo; i++){
		
		if(letras[i] == 'a'){
			
			masc |= 1;
			
		}
		else if(letras[i] == 'e'){
			
			masc |= 2;
			
		}
		else if(letras[i] == 'i'){
			
			masc |= 4;
		}
		else if(letras[i] == 'o'){
			
			masc |= 8;
		}
		else if(letras[i] == 'u'){
			
			masc |= 16;
			
		}
	}

	apariciones[masc] += 1;
	
	//cout << masc << endl;
}

void calcularCombinaciones(){

	int i = 0;

	while(i <= 30){

		if(apariciones[i] >= 1){

			for(int j = (i + 1); j <= 31; j++){

				if(apariciones[j] >= 1){

					if((i | j) == 31){

						resp += apariciones[i] * apariciones[j];
					}
				}

			}

			i++;
		}
		else{

			i++;
		}
	}
	
	resp += (apariciones[31] *(apariciones[31] - 1)/2);

	cout << resp << endl;
}

void imprimirApariciones(){

	for(int i = 0; i <= 31; i++){

		cout << apariciones[i] << " " ;

	}

	cout << endl;
}

int main(){

	int casos = 0;

	cin >> casos;

	while(casos > 0){

		for(int i = 0; i <= 31; i++){

			apariciones[i] = 0;

		}
		resp = 0;

		cin >> n;

		while(n > 0){

			buscarApariciones();
			
			n--;
		}
		
		calcularCombinaciones();
		
		//imprimirApariciones();
		
		casos--;
	}
	
	return 0;

}
