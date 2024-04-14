#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"");
	float salario, valorPrestacao;
		printf("informe o salário: ");
		scanf("%f", &salario);
		printf("Parcela limite: R$ %.2f\n", salario * 20 / 100);
		printf("Informe o valor da prestação: ");
		scanf("%f", &valorPrestacao);
		
			if (valorPrestacao > (salario * 20 / 100)) 
			{
				printf("Empréstimo não concedido.\n");
			}
				else
				{
					printf("Emprestimo concedido.\n");
				}
				system("pause");
}
