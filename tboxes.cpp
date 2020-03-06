#include<bits/stdc++.h>
using namespace std;

int n = 0;
long int r = 0;
long int lista[1000010];

void manipular_lista(){
    
    lista[n] = {};
    
    for(int i = 0; i < n; i++) scanf("%li", &lista[i]);
    
    sort(lista, lista+n);
    
    for(int i = 0; i < n; i++){
        
        r = 0;
        
        r = lista[0] + lista[i];
        
        printf("%li\n", r);
    }
}

int main(){
    
    scanf("%d", &n);
    
    manipular_lista();
    
    return 0;   
}

