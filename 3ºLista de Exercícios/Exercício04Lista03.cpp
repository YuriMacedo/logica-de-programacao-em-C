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
	
	printf("A soma dos n�meros pares de 85 at� 907 � igual a : %d",soma);
	
}
