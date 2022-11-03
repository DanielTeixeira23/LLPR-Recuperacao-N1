#include <stdio.h>
 
int main() {
 
   	int inicio, fim, duracao;
   	
   	printf("Tempo de Jogo\n\n");
   
   	printf("Hora inicial do Jogo: ");
   	scanf("%d", &inicio);
   
	printf("Hora final do Jogo: ");
	scanf("%d", &fim);
   
   	if (inicio<fim){
       
       duracao = fim - inicio;
   	}else{
       
      duracao = fim + 24 -inicio;
   	}
    
    printf("\n");
    printf("O JOGO DUROU %d HORA(S)\n", duracao);
     
    return 0;
}
