#include <stdio.h>
	int main()
{
	int x,y,z=0;
	printf("Digite o número: ");
	scanf("%d", &x);
	for(y=1;y<=x;y++){
		if(x%y==0){
		z++;
		}
	}
	printf("A quantidade de divisores de %d é %d.\n", x, z);
}

