/*Elabore um programa que calcule e imprima o valor de xn. O valor de n dever� ser maior 
do que 1 e inteiro e o valor de b dever� ser maior ou igual a 2 e inteiro. 
O c�lculo da pot�ncia deve ser feito sem o uso de fun��es da biblioteca de math.h da linguagem C.*/
#include<stdio.h>

int main(){
	int n, x,i,acumula;
	
	i = 1;
	acumula = 1;
	
	printf("Digite o valor de x :\n");
	scanf("%d",&x);
	printf("Digite o valor de n :\n");
	scanf("%d",&n);
	
	while(i <= n){
		acumula = acumula * x;
		i++;
	}
	printf("%d elevado a %d � igual a : %d",x,n,acumula);
}
