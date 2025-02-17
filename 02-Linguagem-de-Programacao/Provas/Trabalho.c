#include<stdio.h>
#include "MinhasFuncoes.h"

int main()
{
	//Declaracao de variáveis
	int resp = 0, num1 = 0, num2 = 0;
	double val1 = 0.0, val2 = 0.0, val3 = 0.0;
	
	do
	{
		ImprimirMenu();
		scanf("%d",&resp);
		
		switch(resp)
		{
			case 0:
				printf("Informe os valores que deseja realizar a MDC.\nEx.: a b\n");
				scanf("%d %d",&num1,&num2);
				printf("Resultado: MDC(%d,%d) = %d\n",num1,num2,mdc(num1,num2));
			break;
			case 1:
				printf("Informe os valores que deseja realizar a MMC.\nEx.: a b\n");
				scanf("%d %d",&num1,&num2);
				printf("Resultado: MMC(%d,%d) = %d\n",num1,num2,mmc(num1,num2));
			break;
			case 2:
				printf("Informe os valores que deseja realizar a soma.\nEx.: a+b\n");
				scanf("%lf+%lf",&val1,&val2);
				printf("Resultado: %lf + %lf = %.5lf\n",val1,val2,Soma(val1,val2));
			break;
			case 4:
				printf("Informe os valores que deseja realizar a divisao.\nEx.: a/b\n");
				scanf("%lf/%lf",&val1,&val2);
				if(val2 != 0)
					printf("Resultado: %lf / %lf = %.5lf\n",val1,val2,Divisao(val1,val2));
				else
					printf("E impossivel dividir um numero por 0!\n");
			break;
			case 5:
				printf("Informe os valores que deseja realizar a subtracao.\nEx.: a-b\n");
				scanf("%lf-%lf",&val1,&val2);
				printf("Resultado: %lf - %lf = %.5lf\n",val1,val2,Subtracao(val1,val2));
			break;
			case 6:
				printf("Informe o valor  que deseja realizar a potenciacao B(base) e (expoente).\nEx.: B^e\n");
				scanf("%lf^%d",&val1,&num1);
				printf("Resultado: %lf * %d = %.5lf\n",val1,num1,Potenciacao(val1,num1));
			break;
			case 7:
				printf("Informe os valores que deseja realizar a multiplicacao.\nEx.: a*b\n");
				scanf("%lf*%lf",&val1,&val2);
				printf("Resultado: %lf * %lf = %.5lf\n",val1,val2,Multiplicacao(val1,val2));
			break;
			case 8:
				printf("Informe o numero que deseja saber a raiz quadrada.\nEx.: N\n");
				scanf("%lf",&val1);
				if(val1 < 0)
					printf("Nao existem raiz quadrada de numero negativo no conjunto dos numeros reais!\n");
				else
					printf("Resultado: Raiz(%lf) = %.5lf\n",val1,RaizQuadrada(val1));
			break;
			case 9:
				printf("Informe numero que deseja realizar o duplo fatorial.\nEx.: N!!\n");
				scanf("%d",&num1);
				if(num1 < 0)
					printf("So existe fatorial de numeros naturais (positivos)!\n");
				else
					printf("Resultado: %llu!! = %d\n",num1,DuploFatorial(num1));
			break;
			case 10:
				printf("Informe numero que deseja realizar o fatorial simples.\nEx.: N!\n");
				scanf("%d!",&num1);
				if(num1 < 0)
					printf("So existe fatorial de numeros naturais (positivos)!\n");
				else
					printf("Resultado: %d! = %llu\n",num1,Fatorial(num1));
			break;
			case 11:
				printf("Informe os coeficientes da equacao do segundo grau.\nEx.: A B C\n");
				scanf("%lf %lf %lf",&val1,&val2,&val3);
				EquacaoSegundoGrau(&val1,&val2,&val3);
				printf("As Raizes sao: R1 = %.5lf R2 = %.5lf\n",val1,val2);
			break;
			
		}
		
	}while(resp != 3);

	
	return(0);
}