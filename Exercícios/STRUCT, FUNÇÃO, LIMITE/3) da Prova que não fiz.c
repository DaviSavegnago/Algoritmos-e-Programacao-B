#include <stdio.h>
#include <string.h>

float calculaPesoIdeal(float altura, char sexo){
    if (sexo == 'M' || sexo == 'm'){
        return (62.1 * altura) - 44.7;
    } else if (sexo == 'H' || sexo == 'h'){
        return (72.7 * altura) - 58;
    } else {
        return 0;
    }
}

int main (){
    float altura, peso;
    char sexo;
    float pih, pim;
    
    printf("Digite seu sexo (M para Mulher ou H para Homem):  \n");
    scanf(" %c", &sexo);
    
    if (sexo == 'M' || sexo == 'm'){
        printf("Digite seu peso:  \n");
        scanf("%f", &peso);
        printf("Digite sua altura:  \n");
        scanf("%f", &altura);
        
        pim = calculaPesoIdeal(altura, sexo);
        printf("Seu peso ideal é de: %.2f\n", pim);
        
        if (peso > pim){
            printf("Você está acima do peso ideal.\n");
        } else if (peso < pim){
            printf("Você está abaixo do peso ideal.\n");
        } else {
            printf("Você está no peso ideal.\n");
        }
    }
    
    else if (sexo == 'H' || sexo == 'h'){
        printf("Digite seu peso:  \n");
        scanf("%f", &peso);
        printf("Digite sua altura:  \n");
        scanf("%f", &altura);
        
        pih = calculaPesoIdeal(altura, sexo);
        printf("Seu peso ideal é de: %.2f\n", pih);
        
        if (peso > pih){
            printf("Você está acima do peso ideal.\n");
        } else if (peso < pih){
            printf("Você está abaixo do peso ideal.\n");
        } else {
            printf("Você está no peso ideal.\n");
        }
    }
    
    else {
        printf("Digite H para Homem e M para Mulher!!!\n");
    }

    return 0;
}