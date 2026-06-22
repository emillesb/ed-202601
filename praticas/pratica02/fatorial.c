#include <stdio.h>
#include <time.h>

unsigned long int fatorial(int n){
    if(n>1){
        return n*fatorial(n-1);
    }else if(n==1||n==0){
        return 1;
    }
        printf("Nao existe fatorial desse numero!\n");
        return -1;
}

int main(){
    clock_t tempo_inicial, tempo_final;
    double duracao;
    
    printf("   ///   USANDO FUNCAO RECURSIVEL   ///\n");
    
    tempo_inicial = clock();
    printf("o fatorial de 16 eh: %lu\n", fatorial(16));
    tempo_final = clock();
    duracao = (double)(tempo_final-tempo_inicial)/CLOCKS_PER_SEC;
    printf("O tempo demorado ao todo foi: %.6f seg\n", duracao);

    printf("   ///   USANDO LACO FOR   ///\n");   

    tempo_inicial = clock();
    unsigned long int fatorial = 1;
    for(int i = 1; i<17;i++){
        fatorial = fatorial*i;
    }
    printf("O fatorial de 16 eh: %lu\n", fatorial);

    
    tempo_final = clock();
    duracao = (double)(tempo_final-tempo_inicial)/CLOCKS_PER_SEC;
    printf("O tempo demorado ao todo foi: %.6f seg\n", duracao);


    printf("Ambos metodos apresentam complexidade O(n)\n");

    


    return 0;
}