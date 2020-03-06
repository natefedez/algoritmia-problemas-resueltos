#include<bits/stdc++.h>
using namespace std;
 
int matriz[110][110]; // Declaracion de matriz segun el espacio max que vaya a requerir
int memo[110][110];
int tamano;

void llenarMatriz(){
 
	matriz[tamano][tamano] = {}; // Inicializar toda la matriz en valor cero
	
	for(int i = 0; i < tamano; i++) {
 
        for(int j = 0; j <= i; j++) {
 
        	scanf("%d", &(matriz[i][j]));
 
        }
	}

}
 
void imprimirMatriz(){
 
	for(int i = 0; i < tamano; i++){
 
   		for(int j = 0; j <= i; j++){
 
      		printf("%d ", memo[i][j]);
   		}
 
		printf("\n");
	}
}

int dp(int i, int j){

	if(i == tamano | j > i){

		return 0; 
		
	}
	else if(memo[i][j] != -1){

		return memo[i][j];
	
	}
	else{
		
		return memo[i][j] = matriz[i][j] + max(dp(i + 1, j), dp(i + 1, j + 1));

	}
}

int main(void){
 
	int c = 0;
 
	scanf("%d", &c);
 
	while(c > 0){
 
		scanf("%d", &tamano);
 
		llenarMatriz();
		
		for (int i = 0; i < tamano; i++){
			for(int j = 0; j <= i; j++){
			
				memo[i][j] = -1;
			
			}
		}

		dp(0, 0);
		
		//imprimirMatriz();
		
		printf("%d\n", memo[0][0]);
 
		c--;
	}
 
	return 0;
 
}
 