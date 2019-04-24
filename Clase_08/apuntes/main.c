#include <stdio.h>
#include <stdlib.h>
#include "persona.h"


int main()
{
    ePersona per;
    per=alta( per);


    system("cls");

    printf("su apellido es: %s\n",per.apellido);
    printf("su nombre es: %s\n",per.nombre);
    printf("su edad es: %d\n",per.edad);

    return 0;
}
