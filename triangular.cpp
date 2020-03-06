#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
	

	
	long long int entero;	
	double form;
	
	while (1){
	
		scanf("%ld", &entero);
		
	if(entero == 0){
		
		return 0;
		
	}	
	
	form = ((sqrt (8 * entero + 1)) - 1 )/ 2;
	
	if( floor(form) == form){
		
		printf("YES\n");
	}
		
	else{
	
		printf("NO\n");
    }
    
	}
}
