#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4,nota5, nota6, promedio;
    printf("ingrese nota1");
    scanf("%f",&nota1);
    printf("ingrese nota2");
    scanf("%f",&nota2);
    printf("ingrese nota3");
    scanf("%f",&nota3);
    printf("ingrese nota4");
    scanf("%f",&nota4);
    printf("ingrese nota5");
    scanf("%f",&nota5);
    printf("ingrese nota6");
    scanf("%f",&nota6);

    promedio= (nota1 + nota2 +nota3 +nota4 +nota5 + nota6)/6;

    printf("el promedio de sus notas es : %f \n", promedio);

    if (promedio >= 7)
    {

        printf("Congratulations");
    }
    else
    {
        printf("Reprobado");
    }

    return 0;
}
