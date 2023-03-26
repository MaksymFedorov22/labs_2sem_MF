#include <stdio.h>
#include <stdlib.h>

#define maxi 10

int a[maxi][maxi];

int main()
{
	int x;
	int y;
	int mx = -1024;
	int mn = 1024;
	int mxi;
	int mni;
	int mxj;
	int mnj;
	printf("Fedorov Maksym grupa KNMS-11 pidgrupa 1 lab 7 task 8 \n");
	printf("Vvedit dva chysla kilkist elementiv dvovymirnoho masyvu: ");
	scanf_s("%d %d", &x, &y);

	for (int i = 0; i < x; i++)
	{
		printf("Riadok %d: \n", i);
		for (int j = 0; j < y; j++)
		{
			printf("Vvedit tsile chyslo (element masyvu): ");
			int aa;
			scanf_s("%d", &aa);
			a[i][j] = aa;
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{	
			if (mx < a[i][j])
			{
				mx = a[i][j];
				mxi = i;
				mxj = j;
			}
			if (mn > a[i][j])
			{
				mn = a[i][j];
				mni = i;
				mnj = j;
			}
		}
	}
	printf("Maksymalnyi element dvovymirnogo masyvu: %d, yogo koordynaty: %d %d \n", mx, mxi, mxj);
	printf("Minimalnyi element dvovymirnogo masyvu: %d, yogo koordynaty: %d %d \n", mn, mni, mnj);
}
