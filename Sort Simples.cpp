#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int a,b,c,x,y,z,teste;
	
	printf("Sort Simples\n\n");
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &a);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &b);
	
	printf("Informe o terceiro numero: ");
	scanf("%d", &c);
	
	x = a;
	y = b;
	z = c;
	
	if(a>b){
	   teste = a;
	   a = b;
       	   b = teste;
	}else{
	  teste = a;
	  a = c;
	  c = teste;
	}
	if(b>c){
	   teste = b;
	   b = c;
	   c = teste;
	}
	
	printf("\n");
	
	printf("Numeros em ordem crescente: \n");
	printf("%d\n%d\n%d\n\n",a,b,c);
	
	printf("Numeros na sequencia que foram digitados: \n");
	printf("%d\n%d\n%d\n",x,y,z);
	
	return 0;
}
