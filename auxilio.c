#include <stdio.h>
	int main()
{
	int x=1;
	while(x<=10){
		printf("%d ", x);
		x++;
	}
	printf("\n");
}

//Esses códigos são semelhantes.

#include <stdio.h>
	int main()
{
	int x;
	for(x=1;x<=10;x++){ //Tem que ser nessa ordem.
		printf("%d ", x);
	}
	printf("\n");
}
