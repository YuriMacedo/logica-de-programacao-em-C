/*Programação modular é uma importante técnica de programação. Nesse
contexto, faça um programa para simular uma calculadora simplificada
que apresente ao usuário o seguinte menu,soma;subtração,divisão e multiplicação*/
#include<stdio.h>
#include<locale.h>

int soma(int x, int y){
	
	return x + y;
	
}

int subtracao(int x,int y){
	
	
	return x - y;
}

int multi(int x,int y){
	return x * y;
}

int divisao(int x,int y){
	return x / y;
}

int main(){
	
	setlocale(LC_ALL,"");
	
	int n1,n2,opcao;
	
	do{
	
	printf("Digite o número da opção desejada.\n");
	printf("------Calculadora------\n");
	printf("1-> Soma \n");
	printf("2-> Subtração\n");
	printf("3->Multiplicação\n");
	printf("4->Divisão\n");
	printf("5->Sair\n");
	scanf("%d",&opcao);
	
	if(opcao == 1){
		printf("Soma escolhida...\n");
		printf("Digite o valor do 1º número: \n");
		scanf("%d",&n1);
		printf("Digite o valor do 2º número \n");
		scanf("%d",&n2);
		printf("%d + %d = %d\n",n1,n2,soma(n1,n2));
		
	}
	if(opcao == 2){
		printf("Subtração escolhida..\n");
		printf("Digite o valor do 1º número: \n");
		scanf("%d",&n1);
		printf("Digite o valor do 2º número \n");
		scanf("%d",&n2);
		printf("%d - %d = %d\n",n1,n2,subtracao(n1,n2));
		
	}if(opcao == 3){
		printf("Multiplicação escolhida...\n");
		printf("Digite o valor do 1º número: \n");
		scanf("%d",&n1);
		printf("Digite o valor do 2º número \n");
		scanf("%d",&n2);
		printf("%d x %d = %d\n",n1,n2,multi(n1,n2));
				
	}if(opcao == 4){
		
		printf("Divisão escolhida...\n");
		printf("Digite o valor do 1º número: \n");
		scanf("%d",&n1);
		printf("Digite o valor do 2º número \n");
		scanf("%d",&n2);
		printf("%d / %d = %d\n",n1,n2,divisao(n1,n2));
	}
	
	if(opcao == 5){
		printf("Encerrando o programa...");
	}
	if(opcao <= 0 || opcao > 5){
		printf("Opção escolhida inválida.\nEncerrando o programa...");
	}
	
	}while(opcao >=1 && opcao <=4);
	
	
	
	
}
