#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int p1, p2, p3, p4;
	float media;
	printf("Diz o primero número");
	scanf_s("%d", &p1);
	printf("Diz o segudo número");
	scanf_s("%d", &p2);
	printf("Diz o terceiro número");
	scanf_s("%d", &p3);
	printf("Diz o quarto número");
	scanf_s("%d", &p4);
	media = (p1 + p2 + p3 + p4) / 4.0;
	printf("a média da nota: %.2f", media);
	return 0;
}
