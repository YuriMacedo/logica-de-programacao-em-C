/*Escrever uma fun��o chamada DOBRA que multiplique um n�mero inteiro
recebido como par�metro por 2. Escrever um programa para ler um valor
inteiro e, utilizando a fun��o DOBRA, calcular e exibir o dobro dele.*/

#include<stdio.h>
#include<locale.h>

int dobra(int x){
	return  x * 2;
}

int main(){
	setlocale(LC_ALL,"");
	int n;
	
	printf("Digite um n�mero :\n");
	scanf("%d",&n);
	printf("%d x 2 � igual a: %d",n,dobra(n));
}
