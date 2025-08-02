#include <stdio.h>
 
int main(void) {
 
    float a, pa, b, pb, c, pc, media;
    
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    pa = 2;
    pb = 3;
    pc = 5;
    
    media = ((a*pa)+(b*pb)+(c*pc))/(pa+pb+pc);
    
    printf("MEDIA = %.1f\n", media);
 
    return 0;
}
