#include<bits/stdc++.h>
using namespace std;

main(){

	int n;
	scanf("%d", &n);

	while(n != 0){

		int i, j = 0;
		scanf("%d %d", &j, &i);

		int nfilas = i;
		int ncol = j;
		int matriz[i][j];

		for(i=0; i < nfilas; i++){

		  	for(j=0; j < ncol; j++){

		  		scanf("%d", &matriz[i][j]);

		  	} 

		}

		int a = 0;
		int b = 0;
		int sumactual = 0;
		int sumamax = 0;
		int imax = 0;

		while(b < ncol){

			while(a < nfilas){

				sumactual += matriz[a][b];
				a++;

			} 

			if(sumamax < sumactual){

				imax = b;
				sumamax = sumactual;
				

			}

			sumactual = 0;
			a = 0;
			b++;
		}

		imax++;
		printf("%i\n", imax);

		n--;
	}

	return 0; 

}