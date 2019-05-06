#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
typedef struct
{    int dni;
    char nombre [25];
    int cuenta;

}cliente;
int main()
{
    cliente miprimecliente ;
    miprimecliente.cuenta = 124124;
    miprimecliente.dni = 368638373;
strcpy(miprimecliente.nombre, "juancito");
printf("cuenta = %i\n",miprimecliente.cuenta);
printf("dni = %i\n",miprimecliente.dni);

printf("nombre = %s",miprimecliente.nombre);


        return 0;
}
