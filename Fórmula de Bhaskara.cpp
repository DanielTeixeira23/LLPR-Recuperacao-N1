#include <stdio.h>
#include <math.h>
 
int main() {
	
    double A, B, C, Delta;
    
    printf("Programa para calcular a formula de Bhaskara.\n\n");
    
    printf("Digite o primeiro numero da equacao: ");
    scanf("%lf", &A);
    
    printf("Digite o segundo numero da equacao: ");
    scanf("%lf", &B);
    
    printf("Digite o terceiro numero da equacao: ");
    scanf("%lf", &C);
    
    Delta = (B*B - 4*A*C);
    
    printf("\n");
    
    if(Delta>=0 && A!=0){
    	printf("X LINHA = %.5lf\n", ((-B) + sqrt(Delta)) / (2*A));
        printf("X DUAS LINHAS = %.5lf\n", ((-B) - sqrt(Delta)) / (2*A));
    } else{
    	printf("Impossivel calcular o delta\n");   
    }
    
    return 0;
}
