#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Fedorov Maksym grupa KNMS-11 pidgrupa 1 lab 4 task 2 \n");
    printf("rik ye vysokosnym, yakshcho vin kratnyi 4, ale ne kratnyi 100, a takozh yakshcho vin kratnyi 400 \n");
    int year;
    printf("Vvedit rik: ");
    scanf_s("%d", &year);
    bool res = false;
    if (((year % 4) == 0) && ((year % 100) != 0))
        res = true;

    if ((year % 400) == 0)
        res = true;

    if (res)
        printf("Rik vysokosnyi \n");
    else
        printf("Rik ne vysokosnyi \n");
}
