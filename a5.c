#include <stdio.h>
	int main()
{
	int x;

	while(x!=0){
		printf("Digite seu número:");
		scanf("%d", &x);
		if(x==0){
			break;
		}
		else if(x>0){
			 printf("O número %d é positivo.\n", x);
		}
		else{
			printf("O número %d é negativo.\n", x);
		}
	}
}
			
