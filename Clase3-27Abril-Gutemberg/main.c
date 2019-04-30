#include <stdio.h>

int main()//funcion principal
{/**ejercicio 5 if -else , simples*/
    /**defino mis variable de trabajo*/
    int cantidadLaptop = 0;
    float precioUnitario = 0 ,precioTotal = 0;
    /**Solicito datos al User*/
    printf("Por favor ingrese la cantidad de laptops que compro\n");
    scanf("%i",&cantidadLaptop);
    printf("ingrese el precio unitario por favor \n");
    scanf("%f",&precioUnitario);

    if(cantidadLaptop >= 3){
        /**Acciones por el true*/
        precioTotal = (precioUnitario * cantidadLaptop) * 0.8;
        printf("se aplica descuento del 10 %\n");
    }else{
            /**Acciones por el False*/
        precioTotal = precioUnitario * cantidadLaptop * 0.9;

    }
        printf("el precio final a pagar es : %f",precioTotal);
    return 0;
}
