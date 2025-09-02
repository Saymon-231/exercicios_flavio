#include <stdio.h>
	int main()
{
	int x,y,z=1,p=0,u=1,t;
	printf("Digite um número: ");
	scanf("%d", &x);
	for(y=x;y>0;y--){
		z=z*y;
	}
	while(u<=z){
		t = p+u;
		p=u;
		u=t;
	}
	printf("O fatorial é %d e o próximo na sequência de Fibonacci é %d\n", z, t);
}
