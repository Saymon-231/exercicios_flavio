#include <stdio.h>
	int main()
{
	int x,y;
	printf("Digite o número: ");
	scanf("%d", &x);
	for(y=1;y<=x;y++){
		if(x%y==0){
		printf("%d ", y);
		}
	}
	printf("\n");
}
