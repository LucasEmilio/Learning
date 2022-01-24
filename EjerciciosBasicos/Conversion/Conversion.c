/*Programa el cual recibe un dato en centimetros y lo convierte en pulgadas*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    //valores de entrada
    float cm;

    //valores de salida
    float in;

    //ingreso de datos
    printf("\nDame un valor en cm\n");
    scanf("%f", &cm);

    //manipulacion de datos
    in = cm * 0.3937;
    
    //salida
    printf("%.2f cm = %.2f in\n", cm, in );

    return 0;
}
