/*
Questão 1: Faça um programa que encontre a raiz de uma equação do 2º grau utilizando a fórmula de Báskara. Os coeficientes devem ser forcecidos pelo usuário
*/

#include <stdio.h>

#include <math.h>

int main()
{
	float a, b, c, delta, x1, x2;
	
	printf("digite os coeficientes a, b e c: ");
	scanf("%f %f %f", &a, &b, &c);

	delta = pow(b, 2)-4*a*c;

	if(delta<0);
	{
		printf("nao existe raiz real \n");
		return 0;
	}
	if(delta==0)
	{
		x1 = -b/(2*a);
		printf("o x linha eh: %f\n", x1);
		return 0;
	}
	{
		printf("nao existe raiz real \n");
		return 0;
	}

	x1 = (-b+sqrt(delta))/(2*a);
	x2 = (-b-sqrt(delta))/(2*a);

	printf("o x linha eh: %f\n", x1);
	printf("o x duas linhas eh: %f\n", x2);
}

/*
Questao 2: Faça um programa que calcule a média ponderada dadas as notas e os pesos.
*/

#include <stdio.h>

int main()
{
	float n1, p1, n2, p2, m;

	printf("digite a primeira nota e o peso: ");
	scanf("%f %f", &n1, &p1);

	printf("digite a segunda nota e seu peso: ");
	scanf("%f %f", &n2, &p2);

	m = (n1*p1+n2*p2)/(p1+p2);

	printf("o resultado da media e: %f\n", m);
}

/*
Questão 3: Faça um programa que calcule o aumento de 25% de um sálario fornecido, e mostre o novo sálario para o usuário.
*/

#include <stdio.h>

int main()
{
	float s, sal;

	printf("insira o salario: ");
	scanf("%f", &sal);

	s = sal+(25/100*sal);

	printf("o salario e: %f\n", s);
}