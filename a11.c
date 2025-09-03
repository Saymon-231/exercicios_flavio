#include <stdio.h>
	int main()
{
	int x;
	float v,s=0;
	for(x=1;x<=8;x++){
		printf("Digite o %dº número: ", x);
		scanf("%f", &v);
		s+=v;
	}
	printf("A média é: %.2f\n", s/8);
} 
