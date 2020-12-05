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
		printf("\nO número maior é: %i\n",A);
	}
	else if(B>A) {
		printf("\nO número maior é: %i\n",B);
	}
	else {
		printf("\nOs valores informados são iguais\n");
	}
	system("pause");
}
