/*Programa��o modular � uma importante t�cnica de programa��o. Nesse
contexto, fa�a um programa para simular uma calculadora simplificada
que apresente ao usu�rio o seguinte menu,soma;subtra��o,divis�o e multiplica��o*/
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
	
	printf("Digite o n�mero da op��o desejada.\n");
	printf("------Calculadora------\n");
	printf("1-> Soma \n");
	printf("2-> Subtra��o\n");
	printf("3->Multiplica��o\n");
	printf("4->Divis�o\n");
	printf("5->Sair\n");
	scanf("%d",&opcao);
	
	if(opcao == 1){
		printf("Soma escolhida...\n");
		printf("Digite o valor do 1� n�mero: \n");
		scanf("%d",&n1);
		printf("Digite o valor do 2� n�mero \n");
		scanf("%d",&n2);
		printf("%d + %d = %d\n",n1,n2,soma(n1,n2));
		
	}
	if(opcao == 2){
		printf("Subtra��o escolhida..\n");
		printf("Digite o valor do 1� n�mero: \n");
		scanf("%d",&n1);
		printf("Digite o valor do 2� n�mero \n");
		scanf("%d",&n2);
		printf("%d - %d = %d\n",n1,n2,subtracao(n1,n2));
		
	}if(opcao == 3){
		printf("Multiplica��o escolhida...\n");
		printf("Digite o valor do 1� n�mero: \n");
		scanf("%d",&n1);
		printf("Digite o valor do 2� n�mero \n");
		scanf("%d",&n2);
		printf("%d x %d = %d\n",n1,n2,multi(n1,n2));
				
	}if(opcao == 4){
		
		printf("Divis�o escolhida...\n");
		printf("Digite o valor do 1� n�mero: \n");
		scanf("%d",&n1);
		printf("Digite o valor do 2� n�mero \n");
		scanf("%d",&n2);
		printf("%d / %d = %d\n",n1,n2,divisao(n1,n2));
	}
	
	if(opcao == 5){
		printf("Encerrando o programa...");
	}
	if(opcao <= 0 || opcao > 5){
		printf("Op��o escolhida inv�lida.\nEncerrando o programa...");
	}
	
	}while(opcao >=1 && opcao <=4);
	
	
	
	
}
