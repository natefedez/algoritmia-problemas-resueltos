#include <bits/stdc++.h>
#include <cmath>
int main(){
	
	long long int b;
	long int a;
	long int resa;
	long int resb;
	long int resfinal;
	int n;
	
	scanf("%i", &n);
	
	while(n > 0){
		
		scanf("%Li %Li", &a, &b);
		
	    b = cbrt(b);
		
		printf("Cubo de b: %Li\n", b);
		
		resb = ((b*(b+1))/2);
		resb *= resb;
		
		a = cbrt(a);
		
		a--;
		
		
		resa = ((a*(a+1))/2);
		
		resa *= resa; 
		
		printf("%Li %Li ", resb, resa);
		
		
		resfinal = resb - resa;
		
		//resfinal = resfinal%1000007;
		
		printf("%Li\n", resfinal);
		
		n--;
	}
	
	return 0;
	
	
	
	//cbrt()
	
	
	
}
