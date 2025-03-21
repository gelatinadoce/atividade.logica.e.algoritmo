/*
Elisa está a procura de uma televisão para colocar em sua sala. 
Ela viu um anúncio de um modelo novo com as opções de pagamento à vista e a prazo.
Quanto Elisa pagará a mais se optar pelo pagamento a prazo?
*/

#include <stdio.h>

int main()
{
    float v, p, vista, prazo, diferenca;
    
    printf("digite o valor da televisao a vista e a prazo");
    scanf("%f %f", &v, &p);

    vista = v;

    prazo = 12*p;

    diferenca = prazo-vista;

    printf("Elisa pagara a mais: %f\n", diferenca);
}
