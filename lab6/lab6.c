#include <stdio.h>
#include <stdlib.h>

int a, b, c;

void input()
{
	scanf_s("%d %d %d", &a, &b, &c);
}

int max_of_three(a, b, c)
{
	return max(a, max(b, c));
}

void output(mx)
{
	printf("%d \n", mx);
}

int main()
{
	printf("Fedorov Maksym grupa KNMS-11 pidgrupa 1 lab 6 task 5 \n");
	printf("Vvedit try tsilykh chysla: ");
	input();
	printf("Maksymalne znachennia: ");
	output(max_of_three(a, b, c));
}
