#include<stdio.h> //biblioteca de entrada e sa�da
#include<stdlib.h> //biblioteca padr�o
#include<locale.h>

int main () {
	setlocale(LC_ALL, "portuguese");
	float valor,T1,T2;
	printf("\n Informe o valor do t�nis \n");
	scanf("%f",&valor);
	
	if(valor>500) {
		T2=valor*0.85;
		printf("\nTotal a pagar �: %.2f\n",T2);
	}
	else {
		T1=valor*0.95;
		printf("\nTotal a pagar �: %.2f\n",T1);
	}
	system("pause");
}
