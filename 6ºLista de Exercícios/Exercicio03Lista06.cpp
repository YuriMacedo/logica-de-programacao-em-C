#include<stdio.h>
#include<locale.h>
#define max 10

/*Faça um programa que declare um vetor de 10 posições,
 o preencha com os 10 primeiros números inteiros ímpares e o imprima.*/
 
 int main(){
 	setlocale(LC_ALL,"");
 	int vet[max],i;
 	
 	for(i = 0; i < max;i++){
 		printf("Digite o %dº valor :\n",i + 1);
 		scanf("%d",&vet[i]);
 		
 		if(vet[i] % 2 == 1){
 			vet[i] = vet[i];
		 }else{
		 	printf("Número digitado é par, por favor digite novamente. \n");
		 	i--;
		 }
	 }
	 
	 printf("Números digitados :\n");
	 
	 for(i = 0;i < max;i++){
	 	printf("%d ",vet[i]);
	 }
 	
 }
