#include <stdio.h>
#include <stdbool.h>

int main()
{
	char name[64];

	printf("Fedorov Maksym grupa KNMS-11 pidgrupa 1 lab 8 task 2 \n");

	printf("Vvedit svoie prizvyshche, imia ta po batkovi cherez probil yak odne tekstove dane: ");
	scanf_s("%[^\n]", name, 63);

	char res[3];
	res[0] = name[0];
	int j = 1;
	for (int i = 0; i < 64; i++)
	{
		if (' ' == name[i])
		{
			res[j] = name[i + 1];
			j++;
		}
	}

	printf("Vashi initsialy: %c. %c. %c.", res[0], res[1], res[2]);
}
