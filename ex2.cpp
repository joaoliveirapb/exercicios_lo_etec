#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "portuguese");
	int diabete;
	printf("Informe a porcentagem do seu exame de diabetes\n");
	scanf("%i",&diabete);
	
	if(diabete>=126) {
		printf("\nVocê está com diabetes, precisa se cuidar.\n");
	}
	else if(diabete<=99) {
			printf("\nVocê não tem diabetes\n");
		}
		else{
			printf("\nVocê está com pré-diabetes, tome cuidado!\n");
		}
	system("pause");
}
