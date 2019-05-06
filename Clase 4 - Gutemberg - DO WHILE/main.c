#include <stdio.h>
int main()
{
    /**Validacion de contraseñas*/
    int claveGuardada = 911;
    int claveIngresada=0 ;
    int flag  = 0;/**utlizo variable de tipo bandera
    para validar si es la primera vez que ingresa al Do - While*/

    int intentos = 0;
    while(intentos < 2  && claveGuardada != claveIngresada)
    {
        do
        {
            if(flag == 1)
            {
                intentos ++;
                system("cls");
                printf("Ingreso mal la password\n");
                printf("ingrese su clave por favor \n");
                scanf("%i", &claveIngresada);
            }
            else
            {
                printf("ingrese su clave por favor \n");
                scanf("%i", &claveIngresada);
                flag=1;
            }
        }
        while(claveGuardada != claveIngresada && intentos < 2);

    }

    if( claveGuardada == claveIngresada)
    {
        printf("WELCOME TO APPLICATION \n");

    }
    else
    {

        printf("password bloqueada !\n");
    }
    return 0;
}
