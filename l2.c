#include <stdio.h>
	int main()
{
	float x1,x2=0,y,a=1;
	printf("Digite dois números: ");
	scanf("%f", &x1);
	scanf("%f", &y);
	do{
		x2=x2+x1;
		a++;
	}while(a<=y);
	printf("%.1f\n", x2);
}
	
