#include<stdio.h>
#include<stdio.h>
int main (void){
	
int porta;

printf("Qual e numero da porta?\n");
scanf("%d",&porta);

while(porta != 2){
	printf("O numero digitado foi = %d, numero incorreto tente novamente!\n",porta);
	scanf("%d",&porta);
}
}
