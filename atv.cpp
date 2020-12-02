#include<stdio.h> //biblioteca de entrada e saída
#include<stdlib.h> //biblioteca padrão
#include<locale.h>

int main(){ //inicio
	setlocale(LC_ALL, "portuguese");
	int idade,nasc,ano; //declaração das variaveis
	printf("\nInforme seu ano de nascimento\n"); //exibição na tela do usuário
	scanf("%i",&nasc);//armazenamento
	printf("\nInforme o ano atual\n");
	scanf("%i",&ano);
	idade=ano-nasc;
	printf("\nVocê tem %i anos\n",idade);
	
	if(idade>=18){
		printf("\nVocê é maior de idade\n");
	}
	else{
		printf("\nVocê é menor de idade\n");
	}
	system("pause");
}
