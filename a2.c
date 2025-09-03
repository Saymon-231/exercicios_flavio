#include <stdio.h>
int main()
{
    char op;
    printf("A - Automóvel\n");
    printf("M - Moto\n");
    printf("B - Bicicleta\n");
    printf("O - Ônibus\n");
    printf("C - Caminhando\n");
    printf("Escolha entre uma das opções acima:");  
    scanf("%c", &op);
    
    switch(op)
    {
	case 'a': 
	case 'A': printf("Não é ecologicamente correto\n");
		  break;
		  
	case 'm':
	case 'M': printf("Não é ecologicamente correto\n");
		  break;
		  
	case 'o':
	case 'O': printf("Não é ecologicamente correto\n");
		  break;
		  
	case 'b': 
	case 'B': printf("É ecologicamente correto\n");
		  break;
		  
	case 'c':
	case 'C': printf("É ecologicamente correto\n");
		  break;
	
	default: printf("Opção inválida\n");
    }
}
    
