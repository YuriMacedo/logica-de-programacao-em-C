#include<stdio.h>
#include<string.h>


int main(){
	
	char nome [10];
	float peso,altura,imc;
	
	printf("Digite o nome do paciente :\n");
	scanf("%s",&nome);
	printf("Digite seu peso: \n");
	scanf("%f",&peso);
	printf("Digite sua altura: \n");
	scanf("%f",&altura);
	
	imc = peso / (altura * altura);
	
	if(imc < 20 ){
		
		printf("Nome do paciente : %s \n",nome);
		printf("Você está abaixo do peso");
		
	}else if (imc >= 20 && imc<= 25){
		
		printf("Nome do paciente : %s\n",nome);
		printf("Seu peso está normal ");
		
	}else if (imc > 25 && imc <= 30){
		
		printf("Nome do paciente : %s\n",nome);
		printf("Você está com excesso de peso");
		
	}else if(imc > 30 && imc <= 35){
		
		printf("Nome do paciente : %s\n",nome);
		printf("Você esta obeso.");
		
	}else{
		
		printf("Você esta com obesidade mórbida");
		
	}
	
}
