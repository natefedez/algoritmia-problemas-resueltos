#include<bits/stdc++.h> #include<math.h> 
using namespace std; 

int main(){ 

	long double entero; 
	long double form; 

	while (1){ 

		scanf("%Lf", &entero); 
		
		if(entero == 0) 
			return 0; 
		form = ((sqrt (8.0 * entero + 1.0)) - 1.0 )/ 2.0;

		if( floorl(form) == form)
			printf("YES\n");  
		else 
			printf("NO\n"); 
	} 
} 
