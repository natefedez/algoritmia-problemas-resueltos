#include<bits/stdc++.h>
using namespace std;

long long int q = 0, n = 0, cont = 0, cont2 = 0, cont3 = 0, cont4 = 0; 
long long int resp = 0;

//char word[10005], letra[5];
string word;
char letra;
void capturar_Palabra(){
    cin >> n; cin >> word; cin >> letra;
}

void procesar_Palabra(){
    
    cont = 0;
    cont2 = 0;
    cont3 = 0;
    cont4 = 0;
    
    for(int i = 0; i < n; i++){
        
        cont += (i + 1);
        
        if(letra != word[i]){
            
          cont4++;
          cont2 += cont4; 
          
        } 
        else{
          
          cont3 += cont2;
          cont2 = 0;
          cont4 = 0;
          
        }
    }
    
    cont3 += cont2;
    
    resp = cont - cont3;
    
    cout << resp << endl;
}

int main(){
    
    cin >> q;
    
    while(q){
        
        capturar_Palabra();
        
        procesar_Palabra();
        
        q--;
    }
    
    
    return 0;
}