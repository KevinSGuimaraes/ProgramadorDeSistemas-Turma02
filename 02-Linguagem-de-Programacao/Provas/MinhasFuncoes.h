/*Kevin de Souza Guimarães
Nessa biblioteca onde tenho implementadas minhas funções referente ao Trabalho 01*/

double Soma(double a, double b);
double Subtracao(double a, double b);
double Multiplicacao(double a, double b);
double Divisao(double a, double b);
double Potenciacao(double base, int expoente);
double RaizQuadrada(double num);
unsigned long long Fatorial(int fat);
unsigned long long DuploFatorial(int fat);
int mdc(int a, int b);
int mmc(int a, int b);
void EquacaoSegundoGrau(double *a, double *b, double *c);
void ImprimirMenu();
double fabs(double a);
int abs(int a);



void ImprimirMenu()
{
	FILE *menu = fopen("menu.txt","r");
	char menu_on[679];
	size_t lidos =  fread(menu_on,sizeof(char),679,menu);
	menu_on[lidos] = '\0';
	fclose(menu);
	printf("%s\n",menu_on);
}

int abs(int a)
{
	if(a >0)
		return(a);
	else
		return(a*(-1.0));
}

double fabs(double a)
{
	if(a >0)
		return(a);
	else
		return(a*(-1.0));
}

double Soma(double a, double b)
{
	double c = a+b;
	return(c);
}

double Subtracao(double a, double b)
{
	double c = a-b;
	return(c);
}

double Multiplicacao(double a, double b)
{
	double c = a*b;
	return(c);
}

double Divisao(double a, double b)
{
	double c = a/b;
	return(c);
}

double Potenciacao(double base, int expoente)
{
	double resultado = 1.0;

	if(expoente == 0)
		return(1.0);
	else if(expoente < 0)
	{
		resultado = 1/(Potenciacao(base,expoente*(-1)));
	}
	else
	{
		for(int i = 1; i <= expoente; i++)
		{
			resultado *= base;
		}
	}
	return(resultado);
	
}

double RaizQuadrada(double num)
{
	double erro = 0.0, x = 0.0, novo_x = 0.0;
	
	x = num;
	erro = fabs(x - num / x);
	
	while(erro > 0.0000001)
    {
        novo_x = 0.5*(x+num/x);
        erro = fabs(novo_x-x);
        x = novo_x;
    }
	
	return(novo_x);
}

unsigned long long Fatorial(int fat)
{
	unsigned long long resposta = 1;
	
	if(fat == 0)
	{
		return(1);
	}
	else
	{
		for(int i = 1; i <= fat; i++)
		{
			resposta *= i; 
		}
		return(resposta);
	}
}

unsigned long long DuploFatorial(int fat)
{
	unsigned long long resposta = 1;
	if(fat%2 == 0)
	{
		for(int i = 2; i <= fat; i=i+2)
		{
			resposta *=i; 	
		}
	}
	else
	{
		for(int i = 3; i <= fat; i=i+2)
		{
			resposta *=i; 	
		}	
	}
	
	return(resposta);
}

int mdc(int a, int b)
{
	int aux;
	if(b > a)
	{
		aux =a;
		a = b;
		b=aux;
	}
	
	while(b != 0)
	{
		aux = b;
		b = a%b;
		a = aux;
	}
	return(a);
}

int mmc(int a, int b)
{
	int resultado = 0;
	resultado = abs(a*b)/mdc(a,b);
	return(resultado);
}

void EquacaoSegundoGrau(double *a, double *b, double *c)
{
	double delta = 0.0;
	double aux = 0.0;
	
	if(*a != 0)
	{
		delta = Potenciacao(*b,2)-4**a**c;
		if(delta >= 0)
		{
			aux = (-*b + RaizQuadrada(delta))/(2**a);
			*b = (-*b - RaizQuadrada(delta))/(2**a);
			*a = aux;			
		}
		else
		{
			printf("Não existe raiz no conjunto dos numeros reais!\n");
		}
	}
	else
	{
		printf("A equacao fornecida nao e do segundo grau!\n");
	}

}