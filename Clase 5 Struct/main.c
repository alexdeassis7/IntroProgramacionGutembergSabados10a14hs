#include <stdio.h>
#include <stdlib.h>
/**importamos libreria para uso
de funciones de manejo de Cadenas de caracteres*/
#include <string.h>
/**defi nimos estructura de tipo CD*/
struct CD
{
    char titulo[25] ;
    char artista[25] ;
    float precio;
    int cantidadDeTemas ;
}


int main()
{
    /**declaracion de struct*/
    struct CD musicaParaVolar ;
    /**cargamos la estructura CD con datos*/
    //  strcpy (destino , origen);
    strcpy(musicaParaVolar.artista,"Gustavo Cerati");
    musicaParaVolar.precio = 99.5;
    musicaParaVolar.cantidadDeTemas = 13 ;

    /**solicitamos datos al usuario */
    printf("ingrese el precio del cd \n");
    scanf("%f", &musicaParaVolar.precio);

    printf("\ningrese la cantidad de temas del Cd \n");
    scanf("%i",&musicaParaVolar.cantidadDeTemas);

    printf("ingrese el artista \n");
    scanf("%s",musicaParaVolar.artista);

    printf("#####CD #####");
    printf("artista : %s ", musicaParaVolar.artista);
    printf("\n precio : %f ", musicaParaVolar.precio);
    printf("\n cantidad de temas :%i ",musicaParaVolar.cantidadDeTemas);


//
//    char name [20];
//    printf("ingrese nombre \n");
//    scanf("%s",&name);
    return 0;
}
