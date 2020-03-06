#include<bits/stdc++.h>

int n = 0; float a = 0; float b = 0; float prob = 0;

void calcularProbabilidad(){

	scanf("%f %f", &a, &b);

	prob = a/b;

	printf("%.2f\n", prob);

}


int main(){

	scanf("%d", &n);

	while(n > 0){

		calcularProbabilidad();

		n--;
	}

	return 0;
}