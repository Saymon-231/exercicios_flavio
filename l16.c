#include <stdio.h>
	int main()
{
	char s;
	printf("Escolha o programa: \nF-For mudou para While\nW-While mudou para For\n");
	scanf("%c", &s);
	
	switch(s)
	{
		case 'f':
		case 'F':
			int x=1; 
			while(x<100){
				if(x<10 || x/10+1!=x%10){
					printf("%d ", x);
				}
				x++;
			}
			printf("\n");
			break;
			
		case 'w':
		case 'W':
			int y,p=0,u=1,t;
			printf("Digite um número: ");
			scanf("%d", &y);
			printf("%d %d ", p, u);
			for(t=p+u;t<y;){
				printf("%d ", t);
				p=u;
				u=t;
				t=p+u;
			}
			printf("\n");
			break;
			
		default: printf("Programa não encontrado!");
	}
}

