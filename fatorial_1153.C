#include <stdio.h>
 
int main() {
 
    int n, fatorial;
    scanf("%d", &n);
    
    fatorial = 1;
    
    if (n > 0){
        
        for(int i = n; i > 0; i--){
            
            fatorial *= i;
            
        }
    } 
    
    else {
        
        printf("%d", 1);
    }
    
    printf("%d\n", fatorial);
    return 0;
}
