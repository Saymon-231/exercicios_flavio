#include <stdio.h>
	int main()
{
	int x,y;
	
	for(y=1;y<=8;y++){
		printf("\nDigite o %d número: ", y);
		scanf("%d", &x);
	
		if(x%2==0){
			printf("%d é par\n", x);
		}
		else{
			printf("%d é ímpar\n", x);
		}
	}
}

