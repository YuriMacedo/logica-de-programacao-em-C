#include<stdio.h>

int main(){
	int i,soma,num,j;

	
	
	i = 0;
	soma = 0;
	
	printf("Digite um n�mero (N�meros menores que zero ir�o parar o programa): ");
		scanf("%d",&num);
	
	while(num >= 0){
		printf("Digite um n�mero (N�meros menores que zero ir�o parar o programa): ");
		scanf("%d",&num);	
		
		if(num % 2 == 0){
			soma = soma + num;
			j++;
		}
		i++;
	}
	
		printf("Voc� finalizou o programa\nSoma dos n�meros pares digitados: %d \n M�dia dos n�meros pares digitados : %d",soma,soma  / j);
	
	    
		
}
