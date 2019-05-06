#include <stdio.h>
int j = 0; //esto es una variables global a
//todas las funciones!
int main()
{
/**mostras todo los numeros pares del
 0 al 100 con estructura for*/
long int numeroIngresado = 0;
 printf("ingrese el numero final \n");
scanf("%i",&numeroIngresado);

printf("muestro todos los numeros pares del 0 al %i \n",  numeroIngresado);
 int x;

 for(x = 0; x<= numeroIngresado; x+=2 ){
    /**cuerpo del for*/
    printf("%i \n",x);

 }

return 0;
}
