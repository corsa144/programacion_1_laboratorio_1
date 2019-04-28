#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

#define CANT 3

int main()
{
    ePersona pers[CANT];
    alta( pers, CANT);


    system("cls");

    for(int i=0; i<CANT; i++) {
        printf("su apellido es: %s\n",pers[i].apellido);
        printf("su nombre es: %s\n",pers[i].nombre);
        printf("su edad es: %d\n",pers[i].edad);
    }


    return 0;
}
