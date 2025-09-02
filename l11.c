#include <stdio.h>
	int main()
{
	int x,p=0,u=1,t;
	printf("Digite um número: ");
	scanf("%d", &x);
	printf("%d %d ", p, u);
	t = p+u;
	while(t<x){
		printf("%d ", t);
		p=u;
		u=t;
		t=p+u;
	}
	printf("\n");
}	
	
	
