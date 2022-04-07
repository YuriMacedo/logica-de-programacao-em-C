#include<stdio.h>
#include<locale.h>
#define max 4

/*Construa um programa que leia uma matriz 4x4 e calcule e imprima a soma da diagonal
principal.*/

int main(){
	int mat[max][max],i,j,soma = 0;
	for(i = 0;i < max;i++){
		for(j = 0;j < max;j++){
			printf("Digite o valor da coordenada [%d][%d]: \n",i + 1,j + 1);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\n***Matriz***\n");
	
	for(i = 0;i < max;i++){
		for(j = 0;j < max;j++){
			printf("%d ",mat[i][j]);
			if(i == j){
				soma = soma + mat[i][j];
			}
		}
		printf("\n");	
	}
	
	printf("\nSoma da diagonal principal da matriz digitada: %d\n",soma);
	
}
