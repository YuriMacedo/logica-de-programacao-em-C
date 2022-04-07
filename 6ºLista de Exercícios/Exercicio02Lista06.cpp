#include<stdio.h>
#include<locale.h>
#define max 10
/*Elabore um programa que leia 10 números inteiros em um vetor e imprima-os na ordem inversa.*/

int main(){
	setlocale(LC_ALL,"portuguese");
	int vet[max],i;
	
	for(i = 0;i < max;i++){
		printf("Digite o %dº valor : \n",i + 1);
		scanf("%d",&vet[i]);
	}
	printf("Números digitados na ordem inversa :\n");
	
	for(i = max;i > 0;i--){
		printf("%d ",vet[i]);
	}
	
}
