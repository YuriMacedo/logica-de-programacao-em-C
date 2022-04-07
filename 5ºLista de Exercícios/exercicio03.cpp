/*Faça um programa que leia a medida de um raio e crie duas funções: uma
para calcular a área do círculo e outra para calcular o perímetro da
circunferência. Ao final, o programa deve exibir o resultado dos cálculos.*/
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
	printf("\nÁrea do círculo é : %.1f \n",areaCirculo(raio));
	printf("O perímetro da circunferência é : %.1f",perimetrCircunferencia(raio));
	
}
