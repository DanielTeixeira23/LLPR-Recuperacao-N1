#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
 
   	int A, B, C, D;
   
   	printf("Teste de Sele��o com 4 n�meros - Valida��o de Valores.\n\n");
   
	printf("Digite o primeiro n�mero: ");
   	scanf("%d", &A);
   
   	printf("Digite o segundo n�mero: ");
   	scanf("%d", &B);
   
   	printf("Digite o terceiro n�mero: ");
   	scanf("%d", &C);
   
   	printf("Digite o quarto n�mero: ");
   	scanf("%d", &D);
   
   	printf("\n");
    
   	if(B > C && D > A && C + D > A + B && C && D > 0 && A%2==0)
   	{
		printf("Os Valores Foram Aceitos\n");
   	} else{
   		printf("Os Valores N�o Foram Aceitos\n");
   	}
 
   	return 0;
}
