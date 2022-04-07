#include<stdio.h>

int main(){
	int i,num,r;
	
	printf("Digite um número :");
	scanf("%d",&num);
	
	r = num;
	
	if(num > 0 && num % 2 == 0){
		for(i = 1;num > 1;num--){
			
		i = i * num;
			
		
		}
	}else{
			printf("numero digitado invalido.");
         }
         
         printf("!%d = %d",r,i);
}
