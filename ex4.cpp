#include<stdio.h> //biblioteca de entrada e sa�da
#include<stdlib.h> //biblioteca padr�o
#include<locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	int valor,T1,T2;
	printf("\nInforme o valor do tenis\n");
	scanf("%i",&valor);
	
	if(valor>500) {
		T2=valor*0.85;
		printf("\nTotal a pagar �: %i\n",T2);
	}
	else {
		T1=valor*0.95;
		printf("\nTotal a pagar �: %i\n",T1);
	}
	system("pause");
}
