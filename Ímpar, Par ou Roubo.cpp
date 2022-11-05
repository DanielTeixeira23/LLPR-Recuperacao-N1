#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil"); 
    
    int p, j1, j2, r, a, soma, ganha;
	
    printf("Qual jogador vai ganhar?");
    
    printf("Qual foi a escolha do Jogador 1? \nDigite 1 para PAR ou 0 para ÍMPAR: ");
    scanf("%d", &p);
    
    printf("\n");
    printf("Qual foi o número escolhido pelo jogador 1? ");
    scanf("%d", &j1);
    
    printf("Qual foi o número escolhido pelo jogador 2? ");
    scanf("%d", &j2);
    
    printf("\n");
    printf("O jogador 1 roubou? \nDigite 1 para SIM ou 0 para NÃO: ");
    scanf("%d", &r);
    
    printf("\n");
    printf("O jogador 2 acusou o jogador 1 de roubo? \nDigite 1 se ELE ACUSOU ou 0 se ele NÃO ACUSOU: ");
    scanf("%d", &a);
    
    soma = j1 + j2;
    
    if (soma%2==0 && p==1){
        ganha = 1;
    } else{
    	ganha = 2;
    }
    if (p==0 && soma%2==1){
        ganha = 1;
    } else{
        ganha = 2;
    }
    if (r==1 && a==1){
        ganha = 2;
    }
    if (r==1 && a==0){   
        ganha = 1;
    }
    
    printf("\n");
    printf("Jogador %d ganha!\n", ganha);
    
    return 0;
}
