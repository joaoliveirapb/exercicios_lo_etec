#include<stdio.h> //biblioteca de entrada e sa�da
#include<stdlib.h> //biblioteca padr�o
#include<locale.h>

int main(){ //inicio
	setlocale(LC_ALL, "portuguese");
	int idade,nasc,ano; //declara��o das variaveis
	printf("\nInforme seu ano de nascimento\n"); //exibi��o na tela do usu�rio
	scanf("%i",&nasc);//armazenamento
	printf("\nInforme o ano atual\n");
	scanf("%i",&ano);
	idade=ano-nasc;
	printf("\nVoc� tem %i anos\n",idade);
	
	if(idade>=18){
		printf("\nVoc� � maior de idade\n");
	}
	else{
		printf("\nVoc� � menor de idade\n");
	}
	system("pause");
}
