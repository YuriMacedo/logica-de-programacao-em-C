#include<stdio.h>

int main(){
	
	int opcao;
	float n1, n2;
	
	printf("Digite o 1� n�mero: \n");
	scanf("%f",&n1);
	printf("Digite o 2� n�mero: \n");
	scanf("%f",&n2);
	
	printf("Escolha a opera��o desejada.\n");
	printf("1 - Adi��o\n");
	printf("2 - Subtra��o\n");
	printf("3 - Multiplica��o\n");
	printf("4 - Divis�o\n");
	printf("5 - Sair\n");
	scanf("%d",& opcao);
	
	if(opcao == 1){
		
		printf("Soma dos n�meros : %.1f",n1 + n2);
		
	}if(opcao == 2){
		
		printf("A subtra��o dos n�meros %.1f",n1 - n2);
		
	}if(opcao == 3){
		
		printf("A multiplica��o dos n�meros %.1f",n1 * n2);
		
	}if(opcao == 4){
		
		printf("A divis�o dos n�meros %.1f",n1 / n2);
		
	}if(opcao == 5){
		
		printf("Voc� saiu do programa.");
		
	}
	
	
	
	
}
