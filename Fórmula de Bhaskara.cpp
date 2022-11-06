#include <stdio.h>
#include <math.h>
#include <locale.h>
 
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
	
    double A, B, C, Delta;
    
    printf("Programa para calcular a fórmula de Bhaskara.\n\n");
    
    printf("Digite o primeiro número da equação: ");
    scanf("%lf", &A);
    
    printf("Digite o segundo número da equação: ");
    scanf("%lf", &B);
    
    printf("Digite o terceiro número da equação: ");
    scanf("%lf", &C);
    
    Delta = (B*B - 4*A*C);
    
    printf("\n");
    
    if(Delta>=0 && A!=0){	
    	printf("X LINHA = %.5lf\n", ((-B) + sqrt(Delta)) / (2*A));
        printf("X DUAS LINHAS = %.5lf\n", ((-B) - sqrt(Delta)) / (2*A));    
    } else{
    	printf("Ímpossivel calcular o delta\n");   
    }
    
    return 0;
}
