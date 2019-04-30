#include <stdio.h>

int main()
{
    /**mostras todo los numeros pares del 0 al 100*/
    int contador = 100 ;
    int acumulador = 0;
    int contadorDeNumerosPares = 0;
    /**defino sentencia WHILE - MIENTRAS*/

    while(contador >= 0)
    {
        printf("%i \n", contador);
        /**incremento mi variable de control para no
        entrar en un loop infinito        */
        contadorDeNumerosPares ++;
        contador = contador - 2;
        acumulador = acumulador + contador;
    }
    printf("la suma de todos sus numero pares es = %i\n",acumulador);
    printf("del 0 al 100 existen = %i  numero pares \n",contadorDeNumerosPares);
    return 0;
}
