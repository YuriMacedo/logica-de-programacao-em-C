#include<stdio.h>
#include<locale.h>
#define max 15

/*Fa�a um programa que preencha um vetor de 15 posi��es com n�meros inteiros e, ap�s a leitura,
 atribua valor 0 para todos os elementos que possu�rem valores negativos.
 Ao final, o programa deve imprimir o vetor resultante.*/
 
 int main(){
 	setlocale(LC_ALL,"");
 	
 	int vet[max],i;
 	
 	for(i = 0;i < max;i++){
 		printf("Digite o %d� valor : \n",i + 1);
 		scanf("%d",&vet[i]);
	 }
	 printf("N�meros Digitados: \n");
	 
	 for(i = 0;i < max;i++){
	 	if(vet[i] < 0){
	 		vet[i] = 0;
		 }
		 printf("%d ",vet[i]);
	 }
 	
 }
