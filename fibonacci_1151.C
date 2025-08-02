#include <stdio.h>
 
int main() {
 
    int anterior, atual, proximo, n;
    
    scanf("%d", &n);
    
    anterior = 0;
    atual = 0;
    proximo = 1;
    
    for(int i = 0; i < n; i++){
        
        if(i == 0){
            printf("%d ", 0);
        }
        
        else if(i != n-1){
            
            anterior = atual;
            atual = proximo;
            proximo = anterior + atual;
            
            printf("%d ", atual);
        }
        
        else {
            
            anterior = atual;
            atual = proximo;
            proximo = anterior + atual;
            
            printf("%d\n", atual);
            
        }
        
        
        
        
    }
 
    return 0;
}
