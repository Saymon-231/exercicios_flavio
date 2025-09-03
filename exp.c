#include <stdio.h>
	int main()
{
	int b,e,x=1,y;
	printf("Digite os dois números: ");
	scanf("%d", &b);
	scanf("%d", &e);
	for(y=1;y<=e;y++){
		x = x*b;
	}
	printf("O resultado é %d.\n", x);
}

