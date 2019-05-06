#include <stdio.h>
#include <stdlib.h>

int main()
{

    for(int horas = 1 ; horas < 24; horas++)
    {


        for(   int minutos = 1 ; minutos < 60; minutos++)
        {


            for(int segundos = 1 ; segundos < 60; segundos++)
            {

                printf("%i :%i : %i\n",horas,minutos,segundos);

            }

        }

    }

    return 0;
}
