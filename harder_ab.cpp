#include<bits/stdc++.h>

main(){

	long int a = 0;
	long int b = 0;
	long int harder = 0;
	
	scanf("%li %li", &a, &b);

	harder = ((a+b) + (a-b) + (b+a) + (b-a));
	
	printf("%li", harder);
	
	return 0;

}