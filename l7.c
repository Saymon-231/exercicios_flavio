#include <stdio.h>
	int main()
{
	int x,y,a=0,b=0;
	for(y=1;y<=11;y++){
		printf("Digite o %d° número: ", y);
		scanf("%d", &x);
		if(x%2==0){
			a++;
		}
		else{
			b++;
		}
	}
	printf("%d são pares e %d são ímpares.\n", a, b);
}	
