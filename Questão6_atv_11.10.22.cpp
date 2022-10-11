# include <stdio.h>
# include <locale.h>
  int main() {
  	setlocale(LC_ALL, "Portuguese_Brazil");
  	
  	float a, b, c, r1, r2;
  	printf("Digite dois números para soma-los\n\n\n");
  	
  	printf("Digite o primeiro número: ");
  	scanf("%f", &a);
  	
  	printf("Digite o segundo número: ");
  	scanf("%f", &b);
  	
  	r1 = a + b;
  	
  	printf("A soma desses dois números é %.1f\n\n", r1);
  	
  	printf("Digite um terceiro número que você deseja subtrair com o resultado: ");
  	scanf("%f", &c);
  	
  	r2 = r1 - c;
  	
  	printf("O resultado da subtração desse novo número com o resultado é %.1f", r2);
  	
  	
  	return 0;
  }
