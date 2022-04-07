#include <stdio.h>
int main(){
	float real, valorConve, dolar;
	
	printf("Digite o valor em dólares : \n");
	scanf("%f",&dolar);
	printf("Digite a cotação atual : \n");
	scanf("%f",&valorConve);
	
	real = dolar * valorConve;
	
	printf("Conversão : %.2f reais",real);
	
	
}
