/*Faça um programa que leia a média de alunos de uma determinada turma, 
encontre e exiba o maior valor de média inserida. 
Obs.: Não há informo prévia sobre a quantidade de alunos da turma.*/

#include<stdio.h>
int main(){
	int n;
	float media,maior;
	
	maior = 0;
	
	while(media != -1){
		
		printf("Digite a média : \n");
		scanf("%f",&media);
		
		if(media > maior ){
			maior = media;
			
		
	}
	n++;
	
}
     printf("\nMaior média digitada : %.1f",maior);
}
