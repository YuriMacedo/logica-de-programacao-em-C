#include<stdio.h>

int main(){
	int i, soma;
	soma = 0;
	
	for(i = 85;i <= 907;i++){
		if(i % 2 == 0){
			soma = soma + i;
			
			printf("%d\n",i);
		}
	}
	
	printf("A soma dos números pares de 85 até 907 é igual a : %d",soma);
	
}
