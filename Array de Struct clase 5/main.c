#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANO
/**definimos estructuras Anidadas*/
typedef struct
{
    char name[20];
    //char empresa[10];
    int legajo;
    int DNI;
    char Sexo;
    char provincia[30];
    int CodigoPostal ;
    //float saldo;
} infopersona;

/**defino estructura de tipo Cliente*/
typedef struct
{
    infopersona p;
    char empresa[10];
    float saldo;
} Cliente;

/**defino estructura de tipo Empleado*/
typedef struct
{
    infopersona mipersona;
    int horasExtras ;
    float Sueldo;
} Empleado;

int main()
{
    Empleado p1 ;
    /**defimo mi array de empleados*/
    Empleado misEmpleados [TAMANO];
    int x;
    for(x = 0 ; x < TAMANO ; x ++)
    {
        printf("#########EMPLEADO %i ##########\n", x+1);
        /**cargamos nuestra estrcutura anidada*/
        printf("ingrese nombre del empleado \n");
        scanf("%s",misEmpleados[x].mipersona.name);
        printf("ingrese sueldo del empleado \n ");
        scanf("%f",&misEmpleados[x].Sueldo);
        printf("ingrese horas Extras \n");
        scanf("%i",&misEmpleados[x].horasExtras);
        printf("ingrese el legajo\n");
        scanf("%i",&misEmpleados[x].mipersona.legajo);
        printf("ingrese el dni \n");
        scanf("%i",&misEmpleados[x].mipersona.DNI);
        fflush(stdin);/**limpiamos elk buufer de entrada*/
        printf("ingrese el Sexo  F o M\n");
        scanf("%c", &misEmpleados[x].mipersona.Sexo);
        printf("ingrese la provincia \n");
        scanf("%s",misEmpleados[x].mipersona.provincia);
        fflush(stdin);/**limpiamos elk buufer de entrada*/
        printf("ingrese el Cp \n");
        scanf("%i",&misEmpleados[x].mipersona.CodigoPostal);
    }




    return 0;
}
