#include <stdio.h>
 
int main(){
 	
    double A,B,C,a,b,c;
    
    printf("Tipos de Triangulo\n\n");
	
	printf("Digite o valor do primeiro lado: ");
	scanf("%lf", &a);
	
	printf("Digite o valor do segundo lado: ");
	scanf("%lf", &b);
	
	printf("Digite o valor do terceiro lado: ");
	scanf("%lf", &c);

	if (a>=b && a>=c){
		A = a;
		B = b;
		C = c;	
	}else{
		A = b;
		B = a;
		C = c;	
	}
	if (c>=b && c>=a){
		A = c;
		B = b;
		C = a;	
	}
	
	printf("\n");
	
 	if (A>=B+C) {
    	printf("NAO FORMA TRIANGULO\n");
	}
		
	if (((A*A)==(B*B)+(C*C)) && (!(A>=B+C))){
    	printf("TRIANGULO RETANGULO\n");
	}
	
	if ((A*A) > (B*B) + (C*C) && (A-B<C)){
    	printf("TRIANGULO OBTUSANGULO\n");
	}
	
	if ((A*A)<(B*B)+(C*C)){
    	printf("TRIANGULO ACUTANGULO\n");
	}
	
	if ((A==B) && (B==C) && (C==A)){
    	printf("TRIANGULO EQUILATERO\n");
	}
	
	if (((A==B && A!=C)) || ((B==C && B!=A) || (C==A && C!=B))) {
    	printf("TRIANGULO ISOSCELES\n");
	}
		
    return 0;
}
