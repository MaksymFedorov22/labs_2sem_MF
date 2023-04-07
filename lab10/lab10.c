#include <stdio.h>

struct Car
{
	char model[64];
	int manyear;
	int price;
	char color[32];
	int hp;
};

int main()
{
	printf("Fedorov Maksym grupa KNMS-11 pidgrupa 1 lab 10 task 1 \n \n");

	struct Car cars[3];

	printf("Enter technical specifications for ten cars in English or in numbers: \n \n");
	
	for (int i = 0; i < 3; i++)
	{
		printf("Enter the car model: ");
		scanf_s("%s", cars[i].model, 63);
		printf("Enter the year of manufacture of the car: ");
		scanf_s("%d", &cars[i].manyear);
		printf("Enter the price (uah) of the car: ");
		scanf_s("%d", &cars[i].price);
		printf("Enter car color: ");
		scanf_s("%s", cars[i].color, 31);
		printf("Enter the power (hp) of the car: ");
		scanf_s("%d", &cars[i].hp);
	}

	printf("\n Red cars that were produced after 2002 and cost less than UAH 50000: \n");

	for (int i = 0; i < 3; i++)
		if ((0 == strcmp(cars[i].color, "red")) && (2002 < cars[i].manyear) && (50000 > cars[i].price))
			printf("model: %s, year of manufacture: %d, price (uah): %d, color: %s, power (hp): %d \n", cars[i].model, cars[i].manyear, cars[i].price, cars[i].color, cars[i].hp);
}
