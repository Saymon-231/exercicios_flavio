#include <stdio.h>
#include <math.h>
	int main()
{
	char cal;
	float a,b,x;
	
	do{
	printf("\n S-Soma\n T-Subtração\n M-Multiplicação\n D-Divisão\n E-Exponenciação\n V-Para sair\n\nDigite a operação desejada:");
	scanf(" %c", &cal);

		switch(cal)
	{
		case 's':
		case 'S': 
		printf("Digite os dois números:");
		scanf("%f", &a);
		scanf("%f", &b);
		x = a+b;
			printf("O resultado é %.2f\n\n", x);
			break;
			
		case 't':
		case 'T': 
		printf("Digite os dois números:");
		scanf("%f", &a);
		scanf("%f", &b);
		x = a-b;
			printf("O resultado é %.2f\n\n", x);
			break;
			
		case 'm':
		case 'M': 
		printf("Digite os dois números:");
		scanf("%f", &a);
		scanf("%f", &b);
		x = a*b;
			printf("O resultado é %.2f\n\n", x);
			break;
			
		case 'd':
		case 'D':
		printf("Digite os dois números:");
		scanf("%f", &a);
		scanf("%f", &b);
			if (b != 0) {
				x = a / b;
				printf("O resultado é %.2f\n\n", x);
			} else {
				printf("Erro! Divisão por zero não é permitida.\n");
			}
			break;
			
		case 'e':
		case 'E': 
		printf("Digite os dois números:");
		scanf("%f", &a);
		scanf("%f", &b);
		x = pow(a,b);
			printf("O resultado é %.2f\n\n", x);
			break;
			
		case 'v':
		case 'V': break;
			
		default:printf("Operação não encontrada!\n\n");
	}
	}while(cal!='V' && cal!='v');
}
	
