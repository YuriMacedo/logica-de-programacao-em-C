#include<stdio.h>
#include<locale.h>
#define max 3

/*Escreva um programa que leia uma matriz 3x3, armazene em um vetor a soma dos
elementos por linha e exiba a matriz e o vetor de soma.*/

int main(){
	setlocale(LC_ALL,"");
	int mat[max][max],vetSoma[max],i,j;
	
	for(i = 0;i < max;i++){
		for(j = 0;j < max;j++){
			printf("Digite o valor das coordenadas [%d][%d]:\n",i + 1,j + 1);
			scanf("%d",&mat[i][j]);
			
		}
		vetSoma[i] = 0;
	} 
	printf("\n***Matriz***\n");
	for(i = 0;i < max;i++){
		for(j = 0;j < max;j++){
			vetSoma[i] = vetSoma[i] + mat[i][j];
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	printf("\n*** Soma das Linhas***\n");
	
	for(i = 0;i < max;i++){
		printf("%d \n",vetSoma[i]);
	}
	
	
}
