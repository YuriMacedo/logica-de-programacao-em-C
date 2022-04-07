#include<stdio.h>

#include<math.h>

int main(){
	int a , b , c , areaTri , semiPerimetro;
	
	printf("Digite o valor de A: \n");
	scanf("%d",&a);
	printf("Digite o valor de B: \n");
	scanf("%d",&b);
	printf("Digite o valor de C: \n");
	scanf("%d",&c);
	
	if((a == 0 || b == 0 || c == 0) || ( a + b < c || a + c < b || b + c < a)){
				
	printf("Combinação dos números digitados não formam um triângulo");
	
	}else{
		
		semiPerimetro = (a + b + c) / 2;
		areaTri = sqrt(semiPerimetro * (semiPerimetro - a) * (semiPerimetro - b) * (semiPerimetro - c));
		
		printf("Área do trângulo é igual a : %d",areaTri);
		
	}
	
	
	
}
