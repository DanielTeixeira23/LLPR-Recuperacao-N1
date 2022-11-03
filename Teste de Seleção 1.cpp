#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
 
   	int A, B, C, D;
   
   	printf("Teste de Seleção com 4 números - Validação de Valores.\n\n");
   
	printf("Digite o primeiro número: ");
   	scanf("%d", &A);
   
   	printf("Digite o segundo número: ");
   	scanf("%d", &B);
   
   	printf("Digite o terceiro número: ");
   	scanf("%d", &C);
   
   	printf("Digite o quarto número: ");
   	scanf("%d", &D);
   
   	printf("\n");
    
   	if(B > C && D > A && C + D > A + B && C && D > 0 && A%2==0)
   	{
		printf("Os Valores Foram Aceitos\n");
   	} else{
   		printf("Os Valores Não Foram Aceitos\n");
   	}
 
   	return 0;
}
