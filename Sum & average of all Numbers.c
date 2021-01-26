#include <stdio.h>

#define MAXSIZE 10

int main()
{
	int array[MAXSIZE];
	int i, num, negative_sum = 0, positive_sum = 0;
	float total = 0.0, average;

	printf("Masukan jumlah angka yang diinginkan = ");
	scanf("%d", &num);
	printf("Inputkan %d angka (yang bermuatan +, -, 0) \n", num);

	for (i = 0; i < num; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("Elemen array yang diinputkan\n");

	for (i = 0; i < num; i++)
	{
	printf("%d\n", array[i]);
	}
	
	for (i = 0; i < num; i++)
	{
		if (array[i] < 0)
	{
			negative_sum = negative_sum + array[i];
		}
		else if (array[i] > 0)
		{
		positive_sum = positive_sum + array[i];
		}
		else if (array[i] == 0)
		{ ;
		}

		total = total + array[i];

	}

	average = total / num;
	printf("Jumlah semua angka negatif =  %d \n", negative_sum);
	printf("Jumlah semua angka positif =  %d \n", positive_sum);
	printf("\nRata-rata dari semua angka yang dimasukan =  %.2f \n", average);

	return 0;
}
