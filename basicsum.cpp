#include<bits/stdc++.h>
using namespace std;

int n = 0;
int sec[100010];
int memo[100010];
int inicio = 0, final = 0, casos = 0, suma = 0;

int crearSecuencia(){

	sec[n] = {};
	memo[n] = {};

	for(int i = 0; i < n; i++){

		scanf("%d", &sec[i]);

	}

	memo[0] = sec[0];

	for(int i = 1; i < n; i++){

		memo[i] = memo[i - 1] + sec[i];

	}
}

int calcularRangos(){

	if(inicio != 0){
		
		suma = memo[final] - memo[inicio - 1];

	}
	else{
		
		suma = memo[final];
	}
}

int main(){

	scanf("%d", &n);

	crearSecuencia();

	scanf("%d", &casos);

	while(casos > 0){
		
		suma = 0;

		scanf("%d %d", &inicio, &final);
		
		inicio--;
		final--;

		calcularRangos();

		printf("%d\n", suma);

		casos--;
	}

	return 0;
}