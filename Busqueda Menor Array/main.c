#include <stdio.h>
#include <stdlib.h>

int main()
{
    int miArray[6]= {1,96,11,14,25,153};
    /**busqueda en array*/
    int x,max =0, min = 0 ;
    for(x = 0 ; x < 6 ; x++ )    {

        if(miArray[x] < min)
        {
            min = miArray [x];
        }
        if (miArray[x]> max)
        {
            max = miArray[x];
        }

    }

    printf("el Mayor es : %i \n", max);
    printf("el Menor es : %i", min);

    return 0;
}
