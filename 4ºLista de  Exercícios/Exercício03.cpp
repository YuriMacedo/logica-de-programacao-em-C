/*Elabore um programa que calcule e imprima o valor de xn. O valor de n deverá ser maior 
do que 1 e inteiro e o valor de b deverá ser maior ou igual a 2 e inteiro. 
O cálculo da potência deve ser feito sem o uso de funções da biblioteca de math.h da linguagem C.*/
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
	printf("%d elevado a %d é igual a : %d",x,n,acumula);
}
