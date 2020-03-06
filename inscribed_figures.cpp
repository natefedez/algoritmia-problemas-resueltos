#include<bits/stdc++.h>
using namespace std;

int resp = 0, ult_suma = 0;
int n = 0, bandera = 0;
int arr[110];

void crear_Arreglo(){

	arr[n] = {};

	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

}

void buscar_Respuesta(){

	for(int i = 0; i < (n - 1); i++){

		if(arr[i] + arr[i + 1] == 5){

			bandera = 1;

			break;
		}
		else if(arr[i] == 3 && arr[i + 1] == 1){
		    
		    resp += 4;
		    
		    ult_suma = 1;
		    
		}
		else if(arr[i + 1] == 2 && ult_suma == 1){

			resp += 2;
			
			ult_suma = 0;

		}
		else{

			resp += arr[i] + arr[i + 1];
			
			ult_suma = 0;

		}
	}

	if(bandera == 1) printf("Infinite\n");

	else{

		printf("Finite\n");

		printf("%d\n", resp);
	}


}

void imprimir_Arr(){
    
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    
    printf("\n");
    
}

int main(){

	scanf("%d", &n);

	crear_Arreglo();

	buscar_Respuesta();

	return 0;
}