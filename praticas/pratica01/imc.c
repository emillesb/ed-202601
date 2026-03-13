#include <stdio.h>

float calcular_imc(float altura, float peso){
    if (altura <+ 0.0f || peso <= 0.0f){
return 0.0f;
}
return peso / (altura * altura);
}
int main() {

//    float altura;
  //  float peso;
    float imc = 0.0f;

imc = calcular_imc(0.0f, 50.0f);
printf("altura = 0, peso =50, imc = %1.f => %i\n", imc, imc == 0);

imc = calcular_imc(1.75f, 0.0f);
printf("altura = 1.75, peso =0 , imc = %1.f => %i\n", imc, imc == 0);

imc = calcular_imc(1.75f, 50.0f);
printf("altura =  1.75, peso =50, imc = %1.f => %i\n", imc, imc < 18.5f);

imc = calcular_imc(1.75f, 65.0f);
printf("altura = 1.75, peso =65, imc = %1.f => %i\n", imc, imc < 24.9f);
   
imc = calcular_imc(1.75f, 85.0f);
printf("altura = 1.75, peso =85, imc = %1.f => %i\n", imc, imc < 29.9f);
   
imc = calcular_imc(1.75f, 105.0f);
printf("altura = 1.75, peso =65, imc = %1.f => %i\n", imc, imc > 30.0f);
   



/*float imc 

    printf("Insira seu peso: ");
    scanf("%f", &peso);

    if (peso <= 0){
        printf("IMC = 0. Peso inserido invalido.\n");
        return 0;
    }else{
        printf("Peso inserido: %.2f\n", peso);
    }

    printf("Insira sua altura: ");
    scanf("%f", &altura);

    if (altura <= 0){
        printf("IMC = 0. Altura inserida invalida.\n");
        return 0;
    }else{
        printf("Altura inserida: %.2f\n", altura);
    }

    imc = peso / (altura * altura);

switch (){
    
    case (imc < 18.5){
    printf ("abaixo do peso");}
     case (imc > 18.5 || imc < 24.9){
    printf ("peso normal");}
    case (imc > 25.0 || imc < 29.9){
    printf ("acima do peso");}
    case (imc > 30.0){
    printf ("obesidade");}
    
    printf("Seu IMC eh: %.2f\n", imc);
*/
    return 0;
}