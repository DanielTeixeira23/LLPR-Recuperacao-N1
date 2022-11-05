#include <stdio.h>

int main() {
 
    float N1, N2, N3, N4, MEDIA, EXAME, RECALCULAR;
    
    printf("Calcule a media dos alunos.\n\n");
    
    printf("Informe a primeira nota: ");
    scanf("%f", &N1);
    
    printf("Informe a segunda nota: ");
    scanf("%f", &N2);
	
    printf("Informe a terceira nota: ");
    scanf("%f", &N3);
    
    printf("Informe a quarta nota: ");
    scanf("%f", &N4);
    
    MEDIA = (N1*2 + N2*3 + N3*4 + N4*1) / 10;
    
    printf("Media: %.1f\n", MEDIA);
    
    if (MEDIA >= 7.0){
        printf("Aluno aprovado.\n");
    } 
    if (MEDIA<5.0){
    	printf("Aluno reprovado.\n");
    }

    if (MEDIA>=5.0 && MEDIA<7.0){
    	printf("Aluno em exame.\n");
        
    	scanf("%f", &EXAME);
    	printf("Nota do exame: %.1f\n", EXAME);
    
        RECALCULAR = (EXAME + MEDIA) / 2;

    if (RECALCULAR>=5.0){
	printf("Aluno aprovado.\n");
    }else{
	printf("Aluno reprovado.\n");
    }
      
    printf("Media final: %.1f\n", RECALCULAR);
        
    return 0;
    }
}   
