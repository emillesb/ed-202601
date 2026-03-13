
#include <stdio.h>
float potencia(float base, int expoente){
    if(expoente<1){
        printf("Expoente precisa ser positivo.\n");
    }
    float resultado = 1;    
    for(int i = 0; i<expoente;i++){
        resultado=resultado*base;
    }
    return resultado;
};

int main(){
    printf("2, 1 elevado a 3: %.2f\n", potencia(2.1, 3));
    printf("2 elevado a 5: %.2f\n", potencia(2, 5));
    printf("5 elevado a 3: %.2f\n", potencia(5, 3));
    printf("-2 elevado a 7: %.2f\n", potencia(-2, 7));
    printf("-2 elevado a 6: %.2f\n", potencia(-2, 6));
}