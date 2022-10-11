# include <stdio.h>
# include <locale.h>

  int main(){
  	setlocale(LC_ALL, "Portuguese_Brazil");
  	
  	float n1, n2, media;
  	printf("Calcule a media de 2 números\n\n");
  	
  	printf("Primeiro Número: ");
  	scanf("%f", &n1);
  	
  	printf("Segundo Número: ");
  	scanf("%f", &n2);
  	
  	media = (n1 + n2)/3;
  	printf("O valor calculado da média entre os numeros %.2f e %.2f foi: %f", n1, n2, media);
  	
  	return 0;
  	
  }
