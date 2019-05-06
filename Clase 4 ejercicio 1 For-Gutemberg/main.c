#include <stdio.h>
/**CONSTANTES*/
#define TOTALNOTAS 7

int main()
{
    /**Calcular el promedio de un alumno que tiene 7 calificaciones
    en la materia .....
    */

    float notas[10];/**defino array de notas*/
    float acumulador = 0;
    float promedio = 0;

    int x;
    for (x = 0 ; x < 7; x++ )
    {
        printf("inmgrese la nota %i \n", x+1);
        scanf("%f",&notas[x]);
        /**acumulo todas las notas en la
        variable acumulador*/
        acumulador += notas[x];

    }
    /**calculamos el promedio */
    promedio = acumulador / TOTALNOTAS;
    int j;
    /**Muestro datos cargados en el array*/
    printf("Array Cargado! \n");
    for(j= 0 ; j< 7 ; j++ )
    {
        printf("Notas [%i] = %f \n", j,notas[j]);
    }
    printf("El promedio de sus notas es %.2f ",promedio);
    if (promedio >= 7 )
    {
        printf("CONGRATULATIONs APROBADO\n");
    }
    else{
            printf("LOSSSEEERRRR vuelva pronto \n");
        }





    return 0;
}
