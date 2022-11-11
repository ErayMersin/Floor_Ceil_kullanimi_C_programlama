#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
	double sayi, alt, ust;

	printf("Sayi Gir: ");
	scanf_s("%lf", &sayi);

	alt = floor(sayi);
	printf("Sonuc1: %lf", alt);

	printf("\n");

	ust = ceil(sayi);
	printf("Sonuc2: %lf", ust);

	return 0;
 }