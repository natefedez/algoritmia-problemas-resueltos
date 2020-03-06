#include<bits/stdc++.h>

int n = 0;
int antes[1005], despues[1005];

void crear_Arreglos(){
    
    int c = 0;
    
    while(c <= n){
        
        scanf("%d", &antes[c]);
        scanf("%d", &despues[c]);
        
        c++;
    }
    
}

void buscar_Resp(){
    
    char* resp = "none";
    
    for(int i = 0; i < n; i++){
        
        if(antes[i] != despues[i]){
            
            resp = "rated";
            break;
            
        }
    }
    
    if(resp != "rated"){
        
        for(int i = 0; i < (n - 1); i++){
        
            if(antes[i] < antes[i+1]){
                
                resp = "unrated";
                break;
                
            }
            else{
                
                resp = "maybe";
                
            }
        }
        
        printf("%s", resp);
    }
    
    else{
        
        printf("%s", resp);
        
    }
    
}

int main(){
    
    scanf("%d", &n);
    
    antes[n] = {};
    despues[n] = {};
    
    crear_Arreglos();
    
    buscar_Resp();
    
    return 0;
}


