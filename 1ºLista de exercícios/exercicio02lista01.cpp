#include <stdio.h>

int main (){
	float tempC,tempF;
	
	printf("Digite a temperatura: ");
	scanf("%f", &tempC);
	
	tempF = (9 * tempC +160) / 5;
	
	printf("%1.f graus celsius é igual a ",tempC);
	printf("%1.f graus Fahrenheit",tempF);
}
