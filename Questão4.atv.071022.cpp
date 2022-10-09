#include <stdio.h>
#include <locale.h>

  int main(){
  	setlocale (LC_ALL, "Portuguese_Brazil");
  	
  	float a, b, c, d, resultado;
  	printf("Atribua os valores dos quatros numeros\n\n\n\n");
  	
  	printf("Primeiro numero: ");
  	scanf("%f", &a);
  	
  	printf("Segundo Número: ");
	scanf("%f", &b);
	
	printf("Terceiro Número: ");
	scanf("%f", &c);
	
	printf("Quarto Número: ");
	scanf("%f", &d);
	
	resultado = (a*b*c*d);
	printf("O resultado do produto dos números %.0f, %.0f, %.0f e %.0f é: %.0f", a, b, c, d, resultado);
	
	return 0;	 	
  }
