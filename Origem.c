#include <stdio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	float nota;
	printf("Diz aí um número");
	scanf_s("%f", &nota);
	if (nota <= 9.5)
	{
		printf("Voce é maluco");
	}
	else
	{
		printf("Voce é inteligente");
	}
	return 0;
}