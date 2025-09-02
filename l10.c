#include <stdio.h>
	int main()
{
	int x;
	do{
		printf("Digite sua idade: ");
		scanf("%d", &x);
		if(x!=0){
		if(x>0 && x<16) printf("Você não pode votar!\n");
		else if(x>=16 && x<18 || x>=70) printf("Seu voto é facultativo.\n");
		else if(x>=18 && x<70) printf("seu voto é obrigatório!\n");
		else printf("Idade ínvalida!\n");
		}
	}while(x!=0);
}
		
