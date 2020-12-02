#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int velocidade;
	printf("Informe a velocidade que o carro passou no radar\n");
	scanf("%i",&velocidade);
	
	if(velocidade>120) {
		printf("\nCarro multado!\n");
	}
	else {
		printf("\nCarro liberado!\n");
	}
	system("pause");
}
