#include <stdio.h>
#include <stdlib.h>

int Calculo(float vGas, float vEta)
{
    if ((vGas * 0.7) < vEta) {
        return 0;
    }
    else if ((vGas * 0.7) > vEta){
        return 1;
    }
    else {
        return 2;
    }
}

int main()
{
    printf("###### EcoCar ####### \n");

    float precoGasolina, precoEtanol;

    printf("Qual o preco da gasolina? \n");

    scanf("%f", &precoGasolina);

    printf("Qual o preco do Etanol? \n");

    scanf("%f", &precoEtanol);

    int resultado = Calculo (precoGasolina, precoEtanol);

    if(resultado == 0){
        printf("Compensa abastecer com gasolina. \n");
    }
    else if (resultado == 1){
         printf("Compensa abastecer com etanol. \n");
    }
    else {
        printf("Tanto faz. \n");
    }

    system("pause");

    return 0;
}

