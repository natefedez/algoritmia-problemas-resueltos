#include<bits/stdc++.h>

int n = 0, p = 0, q = 0, x = 0, y = 0;
int memo[105][105];

void buscar_Diferencia(){
    
    int dif = 0;
    
    for(int i = 0; i < n; i++){
        
        if((memo[0][i] | memo[1][i]) == 0){
            
            dif = 1;
            break;
            
        }
        
        
    }
    
    if(dif == 1){
        
        printf("Oh, my keyboard!");
    }
    else{
        
        printf("I become the guy.");
        
    }
    
    
}

void imprimir_Matriz(){

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < n; j++){

			printf("%d ", memo[i][j]);
		}
		printf("\n");
	}

}

int main(){

	scanf("%d", &n);

	memo[2][n] = {};

	scanf("%d", &p);

	while(p != 0){

		scanf("%d", &x);

		memo[0][x - 1] = 1;

		p--;

	}

	scanf("%d", &q);

	while(q != 0){

		scanf("%d", &y);

		memo[1][y - 1] = 1;

		q--;

	}

	//imprimir_Matriz();
	
	buscar_Diferencia();


	return 0;
}