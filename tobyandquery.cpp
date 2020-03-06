#include<bits/stdc++.h>
using namespace std;

int n = 0, query = 0, inicio = 0, final = 0, apa = 0, dif = 0, res = 0;
int sec[100010];
int memo[10][100010];

void crearSecuencia(){

	sec[n] = {};
	memo[10][n] = {};

	for(int i = 0; i < n; i++){

		scanf("%d", &sec[i]);

	}
}

void llenarMemo(){
	
	for(int i = 0; i < 10; i++){
		
		apa = 0;
		
		for(int j = 0; j < n; j++){
			
			if(sec[j] == i){
				
				apa++;
				memo[i][j] = apa; 
				
			}	
			else{
				
				memo[i][j] = apa;
				
			}	
   		}
	}
}

void buscarDif(){

	dif = 0;
	
	for(int i = 0; i < 10; i++){
		
		res = 0;
		
		if(inicio != 0){
			
			res = memo[i][final] - memo[i][inicio - 1];

			if(res > 0){
				
				dif++;

			}

		}
		else{

			res = memo[i][final];

			if(res > 0){

				dif++;

			}
		}
	}

	if(dif == 0){
		
		dif = 1;
		
	}
}

int main(){

	while(scanf("%d", &n) != EOF){

		crearSecuencia();
		
		llenarMemo();
		
		scanf("%d", &query);
				
		while(query > 0){
			
			dif = 0;
			
			scanf("%d %d", &inicio, &final);
		
			inicio--;
			final--;

			buscarDif();

			printf("%d\n", dif);

			query--;

		}
	}
	
	return 0;
}