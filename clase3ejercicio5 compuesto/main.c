#include <stdio.h>

int main()
{
    int edad = 0, antiguedad = 0;
    printf("ingrese su edad please \n");
    scanf("%i",&edad);
    printf("ingrese su atinguedad please \n");
    scanf("%i", &antiguedad);
    if (edad >= 60 && antiguedad < 25)    {
        printf("jubilacion por  edad joven\n");
    }
    else if (edad >= 60  && antiguedad >= 25 )    {
        printf("jubilacion edad adulta\n");
    }
    else if ( edad <60 && antiguedad >= 25)    {
        printf("jubilacion por antiguedad joven\n");
    }
    else    {
        printf("no cumple condiciones para jubilarce\n");
    }

    return 0;
}
