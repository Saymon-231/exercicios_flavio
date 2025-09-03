#include <stdio.h>
	int main()
{
	int x=50;
	
	while(x<=50 && x>=30){
		if(x%2==0)printf("%d\n", x);
		x--;
	}
}
