#include<stdio.h>
#include<locale.h>
#define max 10

/*Fa�a um programa que declare um vetor de 10 posi��es,
 o preencha com os 10 primeiros n�meros inteiros �mpares e o imprima.*/
 
 int main(){
 	setlocale(LC_ALL,"");
 	int vet[max],i;
 	
 	for(i = 0; i < max;i++){
 		printf("Digite o %d� valor :\n",i + 1);
 		scanf("%d",&vet[i]);
 		
 		if(vet[i] % 2 == 1){
 			vet[i] = vet[i];
		 }else{
		 	printf("N�mero digitado � par, por favor digite novamente. \n");
		 	i--;
		 }
	 }
	 
	 printf("N�meros digitados :\n");
	 
	 for(i = 0;i < max;i++){
	 	printf("%d ",vet[i]);
	 }
 	
 }
