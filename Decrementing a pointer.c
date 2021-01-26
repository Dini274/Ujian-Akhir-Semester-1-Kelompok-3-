#include <stdio.h>

const int MAX = 3;

int main()
{

	int var[] = {10, 100, 200};
	int i, *ptr;

	ptr = &var[MAX - 1];
	
	printf("\n ==========================================\n");
	printf(" Program mencetak nilai dan alamat variabel\n");
	printf(" ==========================================\n");

	for (i = MAX; i > 0; i--)
	{

		printf("\n Alamat variabel[%d] = %p\n", i, ptr);
		printf(" Nilai Variabel[%d]  = %d\n", i, *ptr);

		ptr--;

	}

	return 0;
}
