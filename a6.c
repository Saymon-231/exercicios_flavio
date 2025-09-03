#include <stdio.h>
	int main()
{
	int x;

	do{
		printf("Digite seu número:");
		scanf("%d", &x);
		if(x>0) printf("O número %d é positivo.\n", x);
		else if(x<0) printf("O número %d é negativo.\n", x);
	}while(x!=0);
}
