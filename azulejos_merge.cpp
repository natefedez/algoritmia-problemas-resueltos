#include<bits/stdc++.h>

int n = 0;
int matriz[4][100010];
int pos[2][100010];

void merge(int arr[], int l, int m, int r){

    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2){ 

        if (L[i] <= R[j]){

            arr[k] = L[i]; 
            i++; 
        } 
        else{
         
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1){

        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2){

        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

void swap(int* a, int* b){ 

    int t = *a; 
    *a = *b; 
    *b = t; 

} 
  
int partition(int arr[], int pos[], int precios[], int low, int high){

    int pivot = arr[high];     
    int i = (low - 1);   
  
    for (int j = low; j <= high- 1; j++){ 

        if(arr[j] <= pivot){

            i++;    
            swap(&arr[i], &arr[j]); 
            swap(&pos[i], &pos[j]); 
            swap(&precios[i], &precios[j]); 
        }
    } 

    swap(&arr[i + 1], &arr[high]);
    swap(&pos[i + 1], &pos[high]);
    swap(&precios[i + 1], &precios[high]);
    
    return (i + 1); 
} 
  

void quickSort(int arr[], int pos[], int precios[], int low, int high){

    if (low < high){ 
        
        int pi = partition(arr, pos, precios, low, high); 
  
        quickSort(arr, pos, precios, low, pi - 1); 

        quickSort(arr, pos, precios, pi + 1, high); 
    } 
} 

void decswap(int* a, int* b){ 

    int t = *a; 
    *a = *b; 
    *b = t; 

} 
  
int decpartition(int arr[], int pos[], int precios[], int low, int high){

    int pivot = arr[high];     
    int i = (low - 1);   
  
    for (int j = low; j <= high- 1; j++){ 

        if(arr[j] >= pivot){
    
            i++;    
            decswap(&arr[i], &arr[j]); 
            decswap(&pos[i], &pos[j]); 
            decswap(&precios[i], &precios[j]); 
        }
    } 

    decswap(&arr[i + 1], &arr[high]);
    decswap(&pos[i + 1], &pos[high]);
    decswap(&precios[i + 1], &precios[high]);
    
    return (i + 1); 
} 
  

void decquickSort(int arr[], int pos[], int precios[], int low, int high){

    if (low < high){ 
        
        int pi = decpartition(arr, pos, precios, low, high); 
  
        decquickSort(arr, pos, precios, low, pi - 1); 

        decquickSort(arr, pos, precios, pi + 1, high); 
    } 

} 

void imprimir_Matriz(int n, int matriz[][100010]){ 
   
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            
            printf("%d ", matriz[i][j]);
        }
        
        printf("\n");
    }
    
    printf("\n");
} 

void validar_Res(int n, int matriz[][100010]){

    int estaBien = 0;
    int estamuyBien = 0;
    int estasuperBien = 0;
    int cnt2 = n - 1;
    
    for(int i = 0; i < 3; i+=2){
        for(int j = 0; j < cnt2; j++){
            
             //printf("j: %d jplus: %d ", matriz[i][j], matriz[i][j+1]);
            
            if(matriz[i][j] > matriz[i][j+1]){
                
               
                estaBien = 1;
                break;
            }
            
        }
        if(estaBien == 1) break;
    }

    for(int i = 0; i < n; i++){

        if(matriz[1][i] <= matriz[3][i]){

            estamuyBien = 1;
            break;
        }
    }
    
    for(int i = 1; i < 4; i+=2){
        for(int j = 0; j < cnt2; j++){
            
             //printf("j: %d jplus: %d ", matriz[i][j], matriz[i][j+1]);
            
            if(matriz[i][j] < matriz[i][j+1]){
                
               
                estasuperBien = 1;
                break;
            }
            
        }
        if(estasuperBien == 1) break;
    }

    
    if(estaBien == 1 || estamuyBien == 1 || estasuperBien == 1){

        printf("impossible");

    }
    
    else
        imprimir_Matriz(n, pos);
  
}

int main(){ 

    scanf("%d", &n);
    
    //matriz[4][n] = {};
    
    //pos[2][n] = {};
    
    for(int i = 0; i < 4; i++){
        
        for(int j = 0; j < n; j++){
            
            scanf("%d",  &matriz[i][j]);
            
        }
    }

    for(int i = 0; i < 2; i++){
       for(int j = 0; j < n; j++){ 
        
             pos[i][j] = (j + 1);
         
       }
    }
 
    quickSort(matriz[0], pos[0], matriz[1], 0, n-1);
    
    quickSort(matriz[2], pos[1], matriz[3], 0, n-1);
    
    int cnt2 = n - 1;
    int estasuperBien = 0;
    
    for(int i = 1; i < 4; i+=2){
        for(int j = 0; j < cnt2; j++){
            
             //printf("j: %d jplus: %d ", matriz[i][j], matriz[i][j+1]);
            
            if(matriz[i][j] > matriz[i][j+1]){
                
               
                estasuperBien = 1;
                break;
            }
            
        }
        if(estasuperBien == 1) break;
    }
    
    if(estasuperBien == 1){
        
        decquickSort(matriz[1], pos[0], matriz[0], 0, n-1);
    
        decquickSort(matriz[3], pos[1], matriz[2], 0, n-1);
        
    }
    
    validar_Res(n, matriz);
    
    //validar_Res(n, matriz, 0, 0);
    
    //imprimir_Matriz(n, matriz);

    return 0; 
} 