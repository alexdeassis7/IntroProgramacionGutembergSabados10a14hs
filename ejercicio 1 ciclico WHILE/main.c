#include <stdio.h>
/**Realizar un algoritmo que permita realizar 3 veces lo siguiente:
Ingresar 2 números calcular su suma e informar el resultado
*/

int main()
{
    float n1 = 0, n2 = 0;
    int contador = 10;
    while(contador < 13)
    {
        contador ++;
//        contador = contador + 1 ;
//        contador += 1;
        printf("\n#########CALCULADORA#########\n");
        printf("ingrese el numero 1 \n");
        scanf("%f",&n1);
        printf("ingrese el numero4\n");
        scanf("%f",&n2);
        printf("el resultado de la suma es : %.2f",(n1+n2));
    }
    return 0;
}
