#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int diabete;
	printf("Informe a porcentagem do seu exame de diabetes\n");
	scanf("%i",&diabete);
	
	if(diabete>=126) {
		printf("\nVoc� est� com diabetes, precisa se cuidar.\n");
	}
	else if(diabete<=99) {
			printf("\nVoc� n�o tem diabetes\n");
		}
		else{
			printf("\nVoc� est� com pr�-diabetes, tome cuidado!\n");
		}
	system("pause");
}
