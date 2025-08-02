#include <stdio.h>
 
int main() {
 
    int n, x, divisores;
    scanf("%d", &n);
    
    
    
    for(int i = 0; i < n; i++){
        
        scanf("%d", &x);
        divisores = 0;
        
        for(int j = 1; j <= x; j++){
            
            if(x % j == 0){
                
                divisores++;
            }
        }
         
        if (divisores == 2){
             
             printf("%d eh primo\n", x);
            }
         
        else {
             
             printf("%d nao eh primo\n", x);
            }    
    }
        
        
        
        
      return 0;  
        
 }
 
    
