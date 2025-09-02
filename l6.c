#include <stdio.h>
	int main()
{
	int x,y,z=1;
	printf("Digite um número: ");
	scanf("%d", &x);
	printf("%d! = ", x);
	for(y=x;y>0;y--){
		printf("%d ", y);
		z=z*y;
		if(y>1){
			printf("x ");
		}
	}
	printf("= %d\n", z);
}
