#include <stdio.h>
	int main()
{
	int x,y=0,z;
	printf("Digite um número: ");
	scanf("%d", &x);
	for(z=1;z<=x;z++){
		if(x%z==0){
			y++;
		}
	}
	if(y==2){
	printf("O %d é primo.\n", x);
	}
	else{
		printf("O %d não é primo.\n", x);
	}
}
