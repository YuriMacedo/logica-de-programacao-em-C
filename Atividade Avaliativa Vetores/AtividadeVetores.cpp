#include<stdio.h>
#include<locale.h>

/*Defina um vetor para o armazenamento desses dados. O programa deve informar,
 ao final, a m�dia dos dados informados, bem como a quantidade de n�meros positivos e de n�meros negativos.*/

int main(){
	setlocale(LC_ALL,"");
	
	int n[15],positivo = 0,negativo =0;
	int i;
	float media =0;
	
	for(i = 0;i < 15;i++){
		printf("Digite o %d� valor :\n",i+1);
		scanf("%d",&n[i]);
		
		media = media + n[i];
		
		if(n[i] >= 0){
			positivo++;
		}else{
			negativo++;
		}
		
	}
	printf("M�dia dos n�meros digitados: %.1f\n",media/15);
	printf("N�meros positivos digitados: %d\n",positivo);
	printf("N�meros negativos digitados: %d\n",negativo);
}
