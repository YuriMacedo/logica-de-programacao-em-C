#include<stdio.h>
#include<locale.h>

float conversorGrau(float x){
	float c;
	
	c = (5*(x-32)/9);
	return c;

}

int main(){
	setlocale(LC_ALL,"");
	
	float grausFa;
	
	printf("Digite a temperatura :\n");
	scanf("%f",&grausFa);
	
	printf("%.1f� Fahrenheit � igual a %.1f� cent�grados",grausFa,conversorGrau(grausFa));
	
	
}
