#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
#define CANT 5


ePersona alta(ePersona per){

    printf("ingrese apellido:\n");
    fgets(per.apellido,sizeof(per.apellido)-2,stdin);

    printf("ingrese nombre:\n");
    fgets(per.nombre,sizeof(per.nombre)-2,stdin);

    printf("ingrese edad:\n");
    scanf("%d",&per.edad);

    per.isEmpty=0;
    return per;
}
