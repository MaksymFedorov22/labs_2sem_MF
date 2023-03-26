#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    printf("Fedorov Maksym grupa KNMS-11 pidgrupa 1 lab 5 task 8 \n");
    char str[256];
    float f;
    int i = 0;
    float sum = 0;
    float mx = -2147483648.000000;
    printf("Vvodte chysla, yakshcho zakhochete zupynytysia, to napyshit brk: \n");
    while (true)
    {
        scanf_s("%s", &str, 255);
        if (0 == strcmp(str, "brk"))
            break;
        i++;
        f = atof(str);
        sum += f;
        mx = fmaxf(mx, f);
    }
    float av = sum / i;
    printf("Cerednie aryfmetychne: %f \n", av);
    printf("Maksymalnyi element: %f \n", mx);
}
