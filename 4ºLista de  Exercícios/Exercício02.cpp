#include<stdio.h>

int main(){
	int conta, negativo=0, total=0;
	float saldo, montante;
	
	while(conta!=-999 && total<10000){
		printf("\nPor favor, informe o numero da conta (digite -999 para finalizar): ");
		scanf("%d", &conta);
			if(conta!=-999){
			printf("Por favor, informe o saldo do cliente: ");
			scanf("%f", &saldo);
				montante += saldo;
				if(saldo<0){
					negativo++;
				}
			    total++;
			}else{
			}
	}
	printf("\nTotal de clientes: %d", total);
	printf("\nTotal de clientes com saldo negativo: %d", negativo);
	printf("\nSaldo total da agencia: %.2f", montante);
}
