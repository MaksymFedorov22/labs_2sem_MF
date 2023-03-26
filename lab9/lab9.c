#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int rows = 3;
    const int cols = 2;

    int** arr = malloc(sizeof(int*) * rows);

    for (int i = 0; i < rows; i++) 
    {
        arr[i] = malloc(sizeof(int) * cols);
    }


    printf("Enter %d element(s):\n", rows * cols);


    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf_s("%d", *(arr + i) + j);
        }
    }

    int min = **arr;
    int max = **arr;
    for (int i = 0; i < rows; i++) 
    {

        for (int j = 0; j < cols; j++) 
        {
            if (*(*(arr + i) + j) < min)
                min = (*(*(arr + i) + j));
            if (*(*(arr + i) + j) > max)
                max = (*(*(arr + i) + j));
        }

    }

    printf("Minimum element is: %d\n", min);
    printf("Maximum element is: %d\n", max);

    for (int i = 0; i < rows; i++) 
    {
        free(arr[i]);
    }

    free(arr);

    return 0;

}
