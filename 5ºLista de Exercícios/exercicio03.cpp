/*Fa�a um programa que leia a medida de um raio e crie duas fun��es: uma
para calcular a �rea do c�rculo e outra para calcular o per�metro da
circunfer�ncia. Ao final, o programa deve exibir o resultado dos c�lculos.*/
#include<stdio.h>
#include<locale.h>
#include<math.h>

float areaCirculo(float x){
	float area;
	
	area = 3.14 * (pow(x,2));
	return area;
}

float perimetrCircunferencia(float y){
	float perimetro;
	perimetro = (y * 2) * 3.14;
	return perimetro;
}

int main(){
	setlocale(LC_ALL,"");
	float raio;
	
	printf("Digite o valor do raio : \n");
	scanf("%f",&raio);
	printf("\n�rea do c�rculo � : %.1f \n",areaCirculo(raio));
	printf("O per�metro da circunfer�ncia � : %.1f",perimetrCircunferencia(raio));
	
}
