#include <stdio.h>

float calcularImposto(float salario)
{
	float imposto=0.0, aliq;
	
	if (salario<=2259.2)
	{
		imposto = 0.0;
	}
	else if (salario<=2826.65)
	{
		aliq = 0.075;
		imposto = salario*aliq - 169.44;
	}
	else if (salario<= 3751.05)
	{
		aliq = 0.15;
		imposto = salario*aliq - 381.44;
	}
	else if (salario<=4664.68)
	{
		aliq = 0.225;
		imposto = salario*aliq - 662.77;
	}
	else
	{
		aliq = 0.275;
		imposto = salario*aliq - 896.0;
	}
	if (imposto<0.0)
	imposto=0.0;
	
	return imposto;
}

int main()
{
	float renda, imposto, salarioLiquido;
	printf("Digite sua renda \n");
	scanf("%f", &renda);
	
	imposto = calcularImposto(renda);
	salarioLiquido = renda - imposto;
	
	printf("Voce tera que pagar R$ %.2f de imposto \n", imposto);
	printf("Seu salario descontando o IR: R$ %.2f - R$ %.2f = R$ %.2f \n", renda, imposto, salarioLiquido);
}