#include <stdio.h>

int main()
{
    /**defino mi array con 5 posiciones*/
    int miArrayDenumeros[5];
    int contador = 0;
    int cantidadPositivos = 0,cantidadNegativos = 0;
    int cantidadNeutros = 0;
    /**cargo mi array con datos mediante While*/
    while(contador < 5)
    {
        printf("ingrese el numero %i \n", contador );
        scanf("%i",&miArrayDenumeros[contador] );

        /**Validamos que el numero ingresado es > 0 , < 0 , = 0 */
        if(miArrayDenumeros[contador] > 0)
        {
            cantidadPositivos ++;
        }
        else if(miArrayDenumeros[contador] < 0 )
        {
            cantidadNegativos ++ ;
        }
        else
        {
            cantidadNeutros ++ ;
        }

        contador ++ ;
    }
    /**muestro array ocn bucle while*/
    int x = 0;
    printf("el array tiene los siguiente datos\n");
    while(x < 5)
    {
        printf("\n miArrayDeNumeros [%i] = %i ",x,miArrayDenumeros[x]);
        x++;
    }

    printf("\n la cantida de negativos es  %i ", cantidadNegativos);
    printf(" la cantida de positivos es  %i ", cantidadPositivos);
    printf("\n la cantida de neutros es  %i ", cantidadNeutros);

    return 0;
}
