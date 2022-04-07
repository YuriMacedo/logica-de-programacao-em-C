#include<stdio.h>
#include<locale.h>
#define max 10
/*Escreva um programa que leia 10 números inteiros e armazene os positivos no vetor VETPOS e os negativos no vetor VETNEG. 
Ao final imprima os dois vetores*/

int main(){
	setlocale(LC_ALL,"");
	
	int vet[max],vetPos[max],vetNeg[max],i,j = 0,k = 0;
	
	for(i = 0;i < max;i++){
		printf("Digite o valor de %dº número : \n",i + 1);
		scanf("%d",&vet[i]);
		
	}
	
	for(i = 0;i <max;i++){
		if(vet[i] >= 0){
			vetPos[j] = vet[i];
			j++;
		}else{
			vetNeg[k] = vet[i];
			k++;
		}
	}
	printf("Valores positivos :\n");
	for(i = 0;i < max;i++){
		printf("%d ",vetPos[i]);
	}
	printf("\nValores negativos :\n");
	for(i = 0;i < max;i++){
		printf("%d ",vetNeg[i]);
	
		
}
}
