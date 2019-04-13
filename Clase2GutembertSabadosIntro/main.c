#include <stdio.h>

int main()
{
    /**definimos nuestras variables de trabajo*/

    float numero1  = 0;
    float numero2 = 0;
    float resultado = 0;
    /**muestro mensajes por pantalla y escaneo los datos ingresados
     por el teclado*/
    printf("Ingrese el primer numero por favor \n");
    scanf("%f", &numero1);

    printf("Ingrese el primer numero por favor \n");
    scanf("%f", &numero2);

    resultado= numero1 + numero2;

    printf("El resultado de la suma de %.2f + %.2f = %.1f",numero1, numero2,resultado);



    return 0;
}
