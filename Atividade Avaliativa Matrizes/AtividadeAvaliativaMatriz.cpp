#include <stdio.h>
#define max 3
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");

	int matriz[max][max], vet[max], i, j;

	for(i=0;i<max;i++){	  
		for(j=0;j<max;j++){  

			printf("Digite o valor da cordenada [%d] [%d]:\n", i + 1 ,j + 1);
			scanf( "%d", &matriz[i][j]); 
 			 }
	 	vet[i]=0;  	
			 	
		}  
			
	for(i = 0;i<max;i++){
		for(j = 0;j<max;j++){
			printf("%d ",matriz[i][j]);
			}
			printf("\n");
			}

	for(j=0;j<max;j++){  
		for(i=0;i<max;i++){

  			vet[j]=vet[j]+matriz[i][j];  

 			}  

		}  
		printf("Soma das colunas é :\n");

	for(i=0;i<max;i++){

  		printf(" %d  \n", vet[i]);  

   }  



}
