#include <stdio.h>
#include <locale.h>
  int main(){
  	setlocale (LC_ALL, "Portuguese_Brazil");
  	
  	int a, b;
  	
  	float resultado;
  	printf("Divida os números que deseja:\n\n");
  	
  	printf("Insira o Primeiro Número: ");
  	scanf("%d", &a);
  	
  	printf("Insira o Segundo Número: ");
  	scanf("%d", &b);
  	
  	resultado = a / b;
  	
  	int resto = a % b;  	
  	
  	printf("O quociente entre os números %d e %d é %.1f e o resto é %d", a, b, resultado, resto);
  	
  	return 0;
  }
