#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int A,B;
	printf("Informe o primeiro valor\n");
	scanf("%i",&A);
	printf("\nInforme o segundo valor\n");
	scanf("%i",&B);
	
	if(A>B) {
		printf("\nO n�mero maior �: %i\n",A);
	}
	else if(B>A) {
		printf("\nO n�mero maior �: %i\n",B);
	}
	else {
		printf("\nOs valores informados s�o iguais\n");
	}
	system("pause");
}
