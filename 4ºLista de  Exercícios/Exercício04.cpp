/*A s�rie de Fibonacci � formada pela seguinte sequ�ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34, ... etc, 
em que um dado elemento da sequ�ncia � formado pelo soma dos dois elementos anteriores a ele. 
Escreva um programa que gere a s�rie de Fibonacci at� o vig�simo termo.*/
#include <stdio.h>

int main (){
	int i,soma,j;
	j = 1;
	soma = 0;
	
	for(i = 1;i<=20;i++){
		soma = j + i; 
		
		printf("%d,",soma);
	}
}
