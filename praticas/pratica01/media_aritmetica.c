#include <stdio.h>
float media_aritmetica(int *numeros, int size){
    float result = 0;
    for(int i=0;i<size;i++){
        if(numeros[i] >= 100){
            printf("N maior que 100\n");
            return 0;
        }
        result += numeros[i];
    }
    return result/size;
}

int main(){
    printf("Testar inserir 8 numeros\n");
    int numeros1[] = {8,5,9,3,2,10,6,7};
    int k = sizeof(numeros1)/sizeof(numeros1[0]);
    printf("media: %.2f\n",media_aritmetica(numeros1, k));

    
    printf("Testar inserir 13 numeros\n");
    int numeros2[] = {4,5,6,7,8,9,10, 22, 23, 89, 3, 23, 87};
    k = sizeof(numeros2)/sizeof(numeros2[0]);
    printf("media: %.2f\n",media_aritmetica(numeros2, k));

    printf("teste n<=100\n");
    int numeros3[] = {101, 99, 80};
    k = sizeof(numeros3)/sizeof(numeros3[0]);
    printf("media: %.2f\n",media_aritmetica(numeros3, k));

    return 0;
}