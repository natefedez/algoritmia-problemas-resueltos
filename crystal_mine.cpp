#include<bits/stdc++.h>

int n = 0;
char matriz[105][105];


void imprimir_Matriz(){

	memset(memo, 0, sizeof(memo));

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){

			matriz[i][j] = '*';

		}
		
	}

}

int main(){

	scanf("%d", &n);

	printf("%d", n);



	return 0;

}