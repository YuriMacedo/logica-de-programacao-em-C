#include<stdio.h>

int main(){
	int v1, v2,diferenca ,quadrad;
	
	printf("Digite o 1º valor\n");
	scanf("%d",&v1);
	printf("Digite o 2º valor\n");
	scanf("%d",&v2);
	
	diferenca = v1 - v2;
	quadrad = diferenca * diferenca;
	
	
	printf("A diferença do primeiro valor com segundo elevado ao quadrado é igual a : %d",quadrad);
	
	
	
	
}
