#include <stdio.h>
    float t1, t2;
    
    float calcularMedia(){
        return (t1 + t2)/2;
    }
    
    int main () {
        printf("\n Digite as duas temperaturas: ");
        scanf("%f %f", &t1, &t2);
        printf("\nA temperatura média é %.2f", calcularMedia());
        
        return 0;
    }
