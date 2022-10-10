#include <stdio.h>
#include <locale.h>
  int main(){
  	setlocale (LC_ALL, "Portuguese_Brazil");
  	
  	float a, b, resultado;
  	printf("Divida os números que deseja:\n\n");
  	
  	printf("Insira o Primeiro Número: ");
  	scanf("%f", &a);
  	
  	printf("Insira o Segundo Número: ");
  	scanf("%f", &b);
  	
  	resultado = (a / b)%;
  	printf("O quociente entre os números %.2f e %.2f é %.2", a, b, resultado);
  	
  	return 0;
  }
