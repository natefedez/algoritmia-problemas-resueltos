#include<bits/stdc++.h>
using namespace std;

int n = 0, u = 0, l = 0;
int memo[50][50];

void buscarCoeficiente(){
    
    for(int i = 0; i <= 18; i++){
   	    for(int j = 0; j <= 19; j++){
   	        
   	        printf("%d ", memo[i][j]);
   	        
   	    
   	    }
   	    printf("\n");
   	}
}

void binomial(){

	int t = 20, k = 45, p = 0;  
   	int arr[50];
 
   	memset(memo, 0, sizeof(memo));
   	memset(arr, 0, sizeof(arr)); 

   	arr[0] = 1; 
   	
    while(p <= t){
        
  	    for (int i = 1; i <= 19; i++){ 
            for (int j = min(i, k); j > 0; j--)
            	arr[j] = arr[j] + arr[j-1]; 

   	        for(int i = 0; i <= 19; i++){
   	            
   	            memo[p][i] = arr[i];
                
   	        }
        p++;
      } 
   	} 

   	printf("Coeficiente binomial: %d", memo[n][u]);
   	
}

int main(){


	while(scanf("%d %d %d", &n, &u, &l) != EOF){

		printf("n: %d u: %d l: %d\n", n, u, l);

        binomial();

	}

	return 0;

}

    printf(" [ ");
   	    for(int i = 0; i <= 6; i++){
   	        for(int j = 0; j <= 6; j++){
   	        
   	        printf("%d ", memo[i][j]);
   	        
   	    
   	        }
   	        printf(" ] \n");
   	}