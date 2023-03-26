#include <stdio.h>

int main()
{
    int number;
    int proc;
    printf("Fedorov Maksym grupa KNMS-11 pidgrupa 1 lab 3 task 1 \n");
    printf("Vvedit cile chyslo: ");
    scanf_s("%d", &number);
    printf("Vvedit cile chyslo vidcotok: ");
    scanf_s("%d", &proc);
    float res = (number / 100.0) * proc;
    printf("vidpovid: %f", res);
}
