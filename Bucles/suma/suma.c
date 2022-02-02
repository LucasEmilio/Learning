#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n = 0, suma = 0;

	printf("Suma desde 0 hasta n.\n");
	printf("Introduce un número n: ");
	scanf("%d", &n);

	for(int i = 0; i <= n; i++){
		suma=suma+i;
	}
	printf("Suma desde 0 hasta [%d] es de [%d]\n", n, suma);
}
