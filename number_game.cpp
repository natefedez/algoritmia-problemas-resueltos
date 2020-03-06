#include<bits/stdc++.h>
using namespace std;

int puntajes[100010];
int n = 0, maxi = 0, mini = 0, pos = 0, neg = 0;

void crearPuntajes(){

	puntajes[n] = {};

	for(int i = 0; i < n; i++){

		scanf("%d", &puntajes[i]);

	}
}

void maxGrupos(){
	
	for(int i = 0; i < n; i++){

		if(puntajes[i] >= 0){

			pos += puntajes[i];
			maxi++;

		}
		else{

			neg += puntajes[i];
			mini++;
		}
	}	
}

int main(){

	int casos = 0;
	int cuadrado_neg = 0;
	int cuadrado_pos = 0;

	scanf("%d", &casos);

	while(casos > 0){
		
		maxi = 0;
		mini = 0;

		scanf("%d", &n);
		
		crearPuntajes();

		maxGrupos();
		
		if(!mini){
			
			printf("%d %d\n", maxi, maxi);
			
		}
		else if(maxi >= mini){
			
			printf("%d %d\n", maxi, mini);
			
		}
		else if(!maxi){
			
			printf("%d %d\n", mini, mini);
		}
		else{
			
			printf("%d %d\n", mini, maxi);
			
		}

		casos--;
	}
	return 0;
}