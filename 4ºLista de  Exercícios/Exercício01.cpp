/*Fa�a um programa que leia a m�dia de alunos de uma determinada turma, 
encontre e exiba o maior valor de m�dia inserida. 
Obs.: N�o h� informo pr�via sobre a quantidade de alunos da turma.*/

#include<stdio.h>
int main(){
	int n;
	float media,maior;
	
	maior = 0;
	
	while(media != -1){
		
		printf("Digite a m�dia : \n");
		scanf("%f",&media);
		
		if(media > maior ){
			maior = media;
			
		
	}
	n++;
	
}
     printf("\nMaior m�dia digitada : %.1f",maior);
}
