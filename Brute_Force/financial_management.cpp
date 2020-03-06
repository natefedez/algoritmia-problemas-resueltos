#include<bits/stdc++.h>

int main(){

	float m = 0.0;
	float sumabalance = 0.0;

	for(int i = 0; i <= 12; i++){
		
		scanf("%f", &m);
		
		sumabalance += m;
		
		m = 0.0;
		
	}
	
	//printf("\n\n");
	
	sumabalance /= 12;
	
	printf("$%.2f", sumabalance);


	return 0;

}