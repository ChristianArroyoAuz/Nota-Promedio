#include<stdio.h>
#include<iostream>
#include<conio.h>

int main()
{
	float nota[2][3];
	int i;
	int j;

	for (j = 0; j < 1; j++)
	{
		for (i = 0; i < 2; i++)
		{
			printf_s("\nIngrese nota del alumno: ");
			scanf_s("%f", &nota[j][i]);

		}
	}

	nota[0][2] = (nota[0][1] + nota[0][0]) / 2;
	printf("\npromedio nota: %.2f\n\n", nota[0][2]);
	return 0;
}