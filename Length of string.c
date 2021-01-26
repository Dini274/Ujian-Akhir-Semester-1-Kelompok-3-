#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	int length;
	
    printf("            PROGRAM MENGHITUNG PANJANG STRING \n");
    printf("=========================================================");
	printf("\nMasukan string untuk dihitung panjangnya :\n\n");
	gets(a);

	length = strlen(a);

	printf("\nPanjang string yang dimasukan adalah = %d\n", length);

	return 0;
}
