#include<bits/stdc++.h>

int main(){

	int n = 1;
	
	while(1){

		long int a, b, c = 0;
		long int sqa, sbc, sqc = 0;
		long int sqab, sqac, sqcb = 0;

		scanf("%li %li %li", &a, &b, &c);
		
		if(a == 0){
			
			break;
		}

		sqa = (a * a);

		sqb = (b * b);

		sqc = (c * c);

		sqab = (sqa + sqb);

		sqac = (sqa + sqc);

		sqbc = (sqb + sqc);

		if(sqab == sqc || sqac == sqb || sqbc == sqa){

			printf("right");

		}
		else{

			printf("wrong");

		}

	}
	
	return 0;

}