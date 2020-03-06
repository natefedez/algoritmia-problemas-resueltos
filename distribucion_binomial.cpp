#include<bits/stdc++.h> 
using namespace std; 
  
int coeficiente_binomial(int n, int k) 
{ 
    int C[k+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1; 
  
    for (int i = 1; i <= n; i++){ 
        
        for (int j = min(i, k); j > 0; j--) C[j] = C[j] + C[j-1]; 
    
    } 
    
    return C[k]; 
} 

float float_random(){
    
    float r = 0.0;
    
    random_device rd;
    
    mt19937 gen(rd());
    
    uniform_real_distribution<> dis(0, 1);
    
    r = dis(gen);
        
    return r;
        
}
  

int main() 
{ 
    int casos = 0, n = 0, k = 0, t = 0, resp = 0;
    float prob = 0.0, d_binomial = 0.0, r = 0.0;

    scanf("%d %d %f", &casos, &n, &prob);

    for(int i = 0; i < casos; i++){
        
        k = 0;
        resp = 0;

        for(int j = 0; j < n; j++){
            
            k++;
            
            t = coeficiente_binomial(n, k);
            
            d_binomial = t * pow(prob, k) * pow((1 - prob),(n - k));
            
            r = float_random();

            //printf("%f\n", r);
            
            if(r <= d_binomial) resp++;
        }
        
        printf("%d\n", resp);
    }

    return 0; 
} 