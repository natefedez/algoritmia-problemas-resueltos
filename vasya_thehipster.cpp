#include<bits/stdc++.h>

int k = 0, l = 0, m = 0, n = 0, d = 0, resp = 0;

int main(){
    
    scanf("%d", &k);

    scanf("%d", &l);

    scanf("%d", &m);

    scanf("%d", &n);

    scanf("%d", &d);

    if(k == 1) printf("Respuesta: %d", d);

    else{

        for(int i = 1; i < d; i++){

    		if(k%i == 0 || l%i == 0 || m%i == 0 || n%i == 0)
    			resp++;

    	}

    }


	
    return 0;
    
    
}