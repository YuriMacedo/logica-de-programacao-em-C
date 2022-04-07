#include<stdio.h>
#include<locale.h>
#define max 3

/*Faça um programa que leia uma matriz 3x3 e ao final imprima a soma de seus
elementos.*/

int main(){
	setlocale(LC_ALL,"");
	
	int mat [max][max],soma = 0,i,j;
	
	for(i = 0;i < max;i++){
		for(j = 0;j < max;j++){
			printf("Digite o valor das coordenadas [%d][%d]:\n",i + 1,j + 1);
			scanf("%d",&mat[i][j]);
		}
	}
	
	for(i = 0;i < max;i++){
		for(j = 0;j < max;j++){
			printf("%d ",mat[i][j]);
			
			soma = soma + mat [i] [j];
		}
		printf("\n");
	}
	printf("Soma dos valores da matriz : %d \n",soma);
	
}
