#include<stdio.h>

int main(){
	int i,soma,num,j;

	
	
	i = 0;
	soma = 0;
	
	printf("Digite um número (Números menores que zero irão parar o programa): ");
		scanf("%d",&num);
	
	while(num >= 0){
		printf("Digite um número (Números menores que zero irão parar o programa): ");
		scanf("%d",&num);	
		
		if(num % 2 == 0){
			soma = soma + num;
			j++;
		}
		i++;
	}
	
		printf("Você finalizou o programa\nSoma dos números pares digitados: %d \n Média dos números pares digitados : %d",soma,soma  / j);
	
	    
		
}
