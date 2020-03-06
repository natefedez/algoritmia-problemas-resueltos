#include<bits/stdc++.h>

int n = 0, m = 0, an = 0, impn = 0, parn = 0, impm = 0, parm = 0, res1 = 0, res2 = 0, res3 = 0, res4 = 0, resfinal = 0;

int main(){
    
    scanf("%d %d", &n, &m);
    
    for(int i = 0; i < n; i++){
        
        scanf("%d", &an);
        
        if(an%2 == 0) parn++;
        
        else impn++;
        
    }
    
    for(int i = 0; i < m; i++){
        
        scanf("%d", &an);
        
        if(an%2 == 0) parm++;
        
        else impm++;
        
    }
    
    res1 = abs(parm - impn);
    
    res3 = abs(impm - parn);
    
    if(parm > impn){
    
        res2 = abs(res1 - parm);
        
        if(impm > parn) res4 = abs(res3 - impm);
            
        else res4 = abs(res3 - parn);
    }
    else{
        
        res2 = abs(res1 - impn);
        
        if(impm > parn) res4 = abs(res3 - impm);
    
        else res4 = abs(res3 - parn);
    }
    
    resfinal = res2 + res4;
    
    printf("%d", resfinal);
    
    return 0;
}