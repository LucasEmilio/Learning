#include <stdio.h>

int main()
{
   int dia;

   /*Entrada de datos*/
   printf( "Introduzca dia de la semana: \n" );
   scanf( "%d", &dia );

   /*procesp*/
   switch ( dia )
   {
      /*Datos de salida*/
      case 1 : printf( "Lunes" );
               break;
      case 2 : printf( "Martes\n" );
               break;
      case 3 : printf( "Miercoles\n" );
               break;
      case 4 : printf( "Jueves\n" );
               break;
      case 5 : printf( "Viernes\n" );
               break;
      case 6 : printf( "Sabado\n" );
               break;
      case 7 : printf( "Domingo\n" );
               break;
   default : printf( "ERROR: Dia incorrecto.\n" );
   }

   return 0;
}