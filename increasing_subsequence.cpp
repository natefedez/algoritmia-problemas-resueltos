#include<bits/stdc++.h>
using namespace std;

int n;
int arr[2000010];
int res_arr[2000010];
string res = "";

void crear_Arreglo(){
    
    arr[n] = {};
    
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    
}

void crear_Arreglo_Respuesta(){
    
    res_arr[n] = {};
    
    int i = 0, j = (n - 1), q = 0;
    
    if(arr[i] < arr[j]){ 
        
        res_arr[q] = arr[i]; 
        q++;
        i++;
        res = "L";
    }    
    else{
        
        res_arr[q] = arr[j];
        q++;
        j--;
        res = "R";
        
    }
    
    while(i != j){
        
        if(arr[i] < res_arr[q - 1] && arr[j] < res_arr[q - 1]){
            
            break;
            
        }
        else if(arr[i] < arr[j] && arr[i] > res_arr[q - 1]){
            
            res_arr[q] = arr[i];
            q++;
            i++;
            res += "L";
            
        }
        else if(arr[j] > res_arr[q -1]){
            
            res_arr[q] = arr[j];
            q++;
            j--;
            res += "R";
            
        }
        else{
            
            break;
        }
    }
    
    if(arr[i] > res_arr[q - 1] || arr[i] > res_arr[q - 1]){
        
        res_arr[q] = arr[i];
        q++;
        res += "R";
    }
    
    printf("%d\n", q);
    
    cout << res << endl;
    
}

void imprimir_Arreglo(){
    
    for(int i = 0; res_arr[i] != 0; i++) printf("%d ", res_arr[i]);
    
    printf("\n");
    
}

int main(){
    
    scanf("%d", &n);
    
    crear_Arreglo();
    
    crear_Arreglo_Respuesta();
    
    //imprimir_Arreglo();
    
    return 0;
}