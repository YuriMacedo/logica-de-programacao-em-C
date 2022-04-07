/*Escrever uma função chamada DOBRA que multiplique um número inteiro
recebido como parâmetro por 2. Escrever um programa para ler um valor
inteiro e, utilizando a função DOBRA, calcular e exibir o dobro dele.*/

#include<stdio.h>
#include<locale.h>

int dobra(int x){
	return  x * 2;
}

int main(){
	setlocale(LC_ALL,"");
	int n;
	
	printf("Digite um número :\n");
	scanf("%d",&n);
	printf("%d x 2 é igual a: %d",n,dobra(n));
}
