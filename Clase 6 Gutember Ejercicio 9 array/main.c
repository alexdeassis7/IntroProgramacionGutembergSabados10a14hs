#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define TAMANO 80
int main()
{
    /**9)	Diseñe un algoritmo que lea un numero cualquiera y lo busque en el vector X,
    el cual tiene almacenados 80 elementos. Escribir por pantalla donde se encuentra
    almacenado el numero en el vector o el mensaje “NO si no lo encuentra”. (
    Búsqueda secuencial)*/
    int miArray[TAMANO] ;
    int x ;

    /**Cargamos el array de numeros Aleatorios
    Utilizando la funcion Random*/
    for(x = 0 ; x < TAMANO ; x++)
    {
        miArray[x] = rand() % 100 + 1 ;

    }
    /** Mostramos los valores cargados dentro del Vector */
    for(x = 0 ; x < TAMANO ; x++)
    {
        printf("Array X [%i] = %i \n ", x, miArray[x]);
    }

    int numeroIngresado =0;
    printf("ingrese un valor a buscar\n");
    scanf("%i",&numeroIngresado);
    int j, flag = 0, ocurrencias = 0;

    for(j = 0 ; j  < TAMANO ; j++)
    {
        if(miArray[j] == numeroIngresado)
        {
            printf("numero detectado \n");
            printf("posicion detectada % i\n", j);
            flag = 1 ;

            ocurrencias++;
        }
    }
    if(flag == 0)
    {

        printf("El numero no se encuentra en todo el array \n");
    }
    printf("el numero esta %i veces dentro de mi array\n ", ocurrencias);



    return 0;
}
