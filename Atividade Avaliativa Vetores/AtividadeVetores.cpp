#include<stdio.h>
#include<locale.h>

/*Defina um vetor para o armazenamento desses dados. O programa deve informar,
 ao final, a média dos dados informados, bem como a quantidade de números positivos e de números negativos.*/

int main(){
	setlocale(LC_ALL,"");
	
	int n[15],positivo = 0,negativo =0;
	int i;
	float media =0;
	
	for(i = 0;i < 15;i++){
		printf("Digite o %dº valor :\n",i+1);
		scanf("%d",&n[i]);
		
		media = media + n[i];
		
		if(n[i] >= 0){
			positivo++;
		}else{
			negativo++;
		}
		
	}
	printf("Média dos números digitados: %.1f\n",media/15);
	printf("Números positivos digitados: %d\n",positivo);
	printf("Números negativos digitados: %d\n",negativo);
}
