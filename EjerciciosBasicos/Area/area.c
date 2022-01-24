/*Programa que calcula el area de un rectangulo*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	/*Datos de entrada y salida*/
    int base = 0, altura = 0, area = 0;

    /*Entrada de los datos*/
    printf("La base del rectangulo es: ");
    scanf("%d", &base);
    printf("La altura del rectangulo es: ");
    scanf("%d", &altura);

	/*Proceso*/
    area = base * altura;

    /*Salida de los datos*/
    printf("El area del rectangulo es: %d\n", area);

    return 0;
}