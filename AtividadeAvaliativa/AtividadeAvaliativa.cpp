#include<stdio.h>

int main(){
	int idade,i,contIdade,contPeso;
	float peso,altura,somaAltura;
	
    i = 1;
    contPeso = 0;
	contIdade = 0;
	
	while(i <= 20){
		printf("Digite sua idade :\n");
		scanf("%d",&idade);
		printf("Digite seu peso : \n");
		scanf("%f",&peso);
		printf("Digite sua altura : \n");
		scanf("%f",&altura);
		
		somaAltura = somaAltura + altura;
		if(idade > 50){
			contIdade++;
		}if(peso > 100){
			contPeso++;
		}//fim do 2� if
		
		i++;
	}
	printf("\nQuantidade de pessoas acima de 100 kg : %d pessoas.",contPeso);
	printf("\nQuantidade de pessoas que possua mais de 50 anos : %d pessoas",contIdade);
	printf("\nM�dia de altura dos funcion�rios : %2.f",somaAltura / 20);
}
