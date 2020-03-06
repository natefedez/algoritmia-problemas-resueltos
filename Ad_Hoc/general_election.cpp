/*======================================================================
Copyright (C) 2019 Natán Fernández de Castro

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    NOMBRE: General Election
    JUEZ: coj.uci.cu
    ENLACE: https://coj.uci.cu/24h/problem.xhtml?pid=1003
========================================================================*/

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