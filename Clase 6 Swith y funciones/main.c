#include <stdio.h>
#include <stdlib.h>
#include  <c://.....clase7.h>
//prototipos de funcion
int sumar (int numero1, int numero2);
int restar (int numero1, int numero2);
int multiplicar (int numero1, int numero2);
void mostrarmensaje();


int main()
{


    int opcion = 0, numero1 = 0,numero2 = 0,
        continuar = 0;
    do
    {
        /**limpia la consola*/
        system("cls");
        printf("#####CALCULADORA CASERA ###### \n");
        printf("ingrese la opcion deceada\n\n");
        printf("1 - SUMA\n 2 - RESTA\n 3 - MULTIPLICAR");
        scanf("%i", &opcion);
        /**limpia la consola*/
        system("cls");
        switch(opcion)
        {
        case 1:
            /**set de instrucciones a ejecutar
                  para opcion 1*/
            mostrarmensaje();
            scanf("%i", &numero1);
            mostrarmensaje();
            scanf("%i", &numero2);

            printf("el resultado es = %i",sumar(numero1, numero2));
            break;
        case 2:
            /**set de instruciones a ejecutar
            para opcion 2*/
            mostrarmensaje();
            scanf("%i", &numero1);
            mostrarmensaje();
            scanf("%i", &numero2);

            printf("el resultado es = %i", restar(numero1, numero2));
            break;
        case 3:
            /**set de instrucciones a ejecutar
            para opcion 2*/

            mostrarmensaje();
            scanf("%i", &numero1);
            mostrarmensaje();
            scanf("%i", &numero2);
            printf("el resultado es = %i", multiplicar(numero1, numero2));
            break;
        default:
            /**opcion  ejecutada por defecto
            si no existe case para la opcion ingresada*/
            printf("OPCION NO RECONOCIDA\n");
        }
        printf("\ningrese 1 para realizar otra cuenta\n o ingrese otro valor para salir de la calculadora");
        scanf("%i",&continuar);
    }
    while(continuar == 1);

    return 0;
}
int sumar (int numero1, int numero2)
{
    return  numero1 + numero2;
}
int restar (int numero1, int numero2)
{
    int resultado = numero1 - numero2;
    return resultado ;
}
int multiplicar (int numero1, int numero2)
{
    int resultado = numero1 * numero2;
    return resultado ;
}
void mostrarmensaje()
{
    printf("ingrese dato \n");
}

