/* Programa que nos dice si un numero es positivo*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num =0;

	/*Datos de entrada*/
	printf("Ingresa un numero entero\n");
	scanf("%d", &num);


    /*proceso*/
	if (num > 0)
	{	
		/*Datos de salida*/s
		printf("[%d] es un numero positivo\n", num);
		
	}
	return 0;
}