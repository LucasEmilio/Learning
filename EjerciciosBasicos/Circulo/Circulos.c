/*Programa el cual recibe el radio de un circulo y regresa el area y perimetro*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    //variables de entrada
    float radio;
    float MPI = 3.1416;
    //variables de salida
    float area;
    float perimetro;

    //Entrada de datos
    printf("\nIngresa el valor del radio a calcular\n");
    scanf("%f", &radio);

    //Proceso
    area = MPI * radio * radio;
    perimetro = 2 * MPI * radio;
    
    //Salida de los Datos
    printf("Tu valor ingresado es: %.2f\n", radio);
    printf("El area es: %.2f\n", area);
    printf("El perimetro es: %.2f\n", perimetro);

    return 0;
}