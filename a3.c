#include <stdio.h>
int main()
{
	char cal;
	float a,b,x;
	
	printf("Digite a operação desejada:\n S-Soma\n T-Subtração\n M-Multiplicação\n D-Divisão\n");
	scanf("%c", &cal);
	
	printf("Digite os dois números:");
	scanf("%f", &a);
	scanf("%f", &b);
	
	switch(cal)
	{
		case 's':
		case 'S': x = a+b;
			printf("O resultado é %.2f\n", x);
			break;
			
		case 't':
		case 'T': x = a-b;
			printf("O resultado é %.2f\n", x);
			break;
			
		case 'm':
		case 'M': x = a*b;
			printf("O resultado é %.2f\n", x);
			break;
			
		case 'd':
		case 'D': x = a/b;
			printf("O resultado é %.2f\n", x);
			break;
			
		default:printf("Operação não encontrada!");
	}
}
