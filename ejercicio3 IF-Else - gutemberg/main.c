#include <stdio.h>

int main()
{
    //defino variables de trabajo

    float salarioSemanal = 0, hsTrabajadas =0  ;
    printf("por favor ingrese sus horas trabajadas \n");
    scanf("%f",&hsTrabajadas);

    if(hsTrabajadas > 40)
    {
        printf("#####SI REALIZO HORAS EXTRAS#####\n");
        salarioSemanal = (40 *16) + (hsTrabajadas - 40) * 20;

    }
    else
    {
        printf("#####NO REALIZO HORAS EXTRAS#####\n");
        salarioSemanal = hsTrabajadas * 16;
    }

    /**muestro el salario*/
    printf("sulario es de  : %f", salarioSemanal);
    return 0;
}
