#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int saida, tempo, fuso;
    
    printf("Saiba qual ser� a hora quando chegar no seu destino.\n\n");
    
    printf("Qual foi a hora da sua sa�da? ");
    scanf("%d", &saida);
    
    printf("Quanto tempo de dura��o da sua viagem? ");
    scanf("%d", &tempo);
    
    printf("Qual o fuso hor�rio no seu local de destino? ");
    scanf("%d", &fuso);
    
    if(saida==0){
    	saida = 24;
    } else {
	saida = ((saida + tempo + fuso) % 24);
	}
	
	printf("\n");
    printf("A hora atual no seu local de destino ser� �s: %d horas\n", saida);    
    
    return 0;
}
