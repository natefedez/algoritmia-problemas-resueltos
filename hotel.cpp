#include<bits/stdc++.h>
using namespace std;

int main(){

	int n = 0;
	int sqn = 0;

	scanf("%i", &n);

	sqn = (n * n);

	int matriz[n][n];
	int largo = n - 1;
	int i = 0;
	int j = 0;
	int cont = 1;
	int temp = 0;

	i = 0;
	j = (largo + 1);

	while(i <= largo){

		i = 0;
		j--;
		temp = j;

		while(j <= largo){

			matriz[i][j] = cont;
			cont++;
			i++;
			j++;

		}
		j = temp;
	}
	i = 0;
	j = 1;
	
	while(i <= largo && j != 0){
		
		i++;
		j = 0;
		temp = i;

		while( i <= largo ){
	
			matriz[i][j] = cont;
			i++;
			j++;
			cont++;
		}

		i = temp;
	}

	for(i = 0; i < n; ++i){

   		for(j = 0; j < n; ++j){

      		printf("%i ",matriz[i][j]);
   		}
			printf("\n");
	}

	return 0;
}