#include <stdio.h>

int main()
{
	printf("Fedorov Maksym grupa KNMS-11 pidgrupa 1 lab 2 task 2 \n");
	float suma;
	printf("Vvedit sumu groshey v grn: ");
	scanf_s("%f", &suma);
	float eur = 39.07;
	float usd = 36.85;
	eur = suma / eur;
	usd = suma / usd;
	printf("suma v evro : %f\n", eur);
	printf("suma v dollarah : %f\n", usd);
}
