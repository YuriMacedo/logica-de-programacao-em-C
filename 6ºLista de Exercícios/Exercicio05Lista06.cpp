#include<stdio.h>
#include<locale.h>
#define max 3

/*Construa um programa que leia dois vetores com 10 elementos inteiros cada um e
 armazene em um terceiro vetor a interse��o dos dois vetores.
 Ao final, o programa deve imprimir o vetor de interse��o.*/
 
 int main(){
 	setlocale(LC_ALL,"");
 	
 	int vet1[max],vet2[max],vet3[max],i,j = 0,k =0;
 	
 	printf("\n ***1� vetor *** \n");
 	for(i = 0; i < max;i++){
 		printf("Digite o %d� valor :\n",i + 1);
 		scanf("%d",&vet1[i]);
 		vet3[i] = 0;
 		
	 }
	 
	 printf("\n ***2� vetor *** \n");
	 for(i = 0;i < max;i++){
	 	printf("Digite o %d� valor :\n",i + 1);
	 	scanf("%d",&vet2[i]);
	 }
	 printf("\n ***Interse��o dos Vetores ***\n");
	 for(i = 0;i < max;i++){
	 	for(j = 0;j < max;j++){
	 		if(vet1[i] == vet2[j]){
	 			vet3[k] = vet2[j];
	 			k++;
			 }
		 }
		 
	 }
	 for(i = 0;i < max;i++){
	 	printf("%d ",vet3[i]);
	 }
 }
