#include <stdio.h>
int main(){
	float real, valorConve, dolar;
	
	printf("Digite o valor em d�lares : \n");
	scanf("%f",&dolar);
	printf("Digite a cota��o atual : \n");
	scanf("%f",&valorConve);
	
	real = dolar * valorConve;
	
	printf("Convers�o : %.2f reais",real);
	
	
}
