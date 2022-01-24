/*Programa el cual recibe un nombre, y regresa el nombre mas un saludo*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    //variables de entrada
    char name[50];
    //variables de Salida
    char saludo[50] = "Hola ";

    //Entrada de los datos
    printf("Ingresa tu nombre por favor\n");
    scanf("%s",name);

    //Proceso de datos
    strcat(saludo, name);
    
    //Salida de datos
    printf("%s\n",saludo);


    return 0;
}

