#include<stdio.h>

int main(){
	
	int opcao;
	float n1, n2;
	
	printf("Digite o 1º número: \n");
	scanf("%f",&n1);
	printf("Digite o 2º número: \n");
	scanf("%f",&n2);
	
	printf("Escolha a operação desejada.\n");
	printf("1 - Adição\n");
	printf("2 - Subtração\n");
	printf("3 - Multiplicação\n");
	printf("4 - Divisão\n");
	printf("5 - Sair\n");
	scanf("%d",& opcao);
	
	if(opcao == 1){
		
		printf("Soma dos números : %.1f",n1 + n2);
		
	}if(opcao == 2){
		
		printf("A subtração dos números %.1f",n1 - n2);
		
	}if(opcao == 3){
		
		printf("A multiplicação dos números %.1f",n1 * n2);
		
	}if(opcao == 4){
		
		printf("A divisão dos números %.1f",n1 / n2);
		
	}if(opcao == 5){
		
		printf("Você saiu do programa.");
		
	}
	
	
	
	
}
