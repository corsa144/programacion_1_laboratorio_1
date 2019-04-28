#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "persona.h"
#define CANT 5

void alta( ePersona pers[], int cantidad ){
    int i=0,legajoAux,flag,j;
    char rta;
    char* mensaje="Ingrese legajo\n";

    do{
        do{
            legajoAux=getInt(mensaje);
            flag=0;
            for (j=0;j<cantidad;j++){
                if (pers[j].legajo==legajoAux&&pers[j].isEmpty==0){
                    printf("Error: legajo ya existe.\n");
                    flag=1;
                    break;
                }
            }
        } while(flag==1);

        pers[i].legajo = legajoAux;

        printf("ingrese apellido:\n");
        fgets(pers[i].apellido,sizeof(pers[i].apellido)-2,stdin);

        printf("ingrese nombre:\n");
        fgets(pers[i].nombre,sizeof(pers[i].nombre)-2,stdin);

        printf("ingrese edad:\n");
        scanf("%d",&pers[i].edad);

        pers[i].isEmpty=0;

        i++;

        printf("Desea seguir? s/n");
        scanf("%c", &rta);
        rta = toupper(rta);
    } while(rta=='S');
}

char getChar(char mensaje[]){

    char letra;

    printf("%s",mensaje);
    scanf("%c",&letra);

    return letra;
}

int getInt(char mensaje[]){

    int entero;

    printf("%s",mensaje);
    scanf("%d",&entero);

    return entero;
}

float getFloat(char mensaje[]){

    float numero;

    printf("%s",mensaje);
    scanf("%f",&numero);

    return numero;
}

char* getString(char mensaje[]){

    char texto[101];

    printf("%s",mensaje);
    fgets(texto,sizeof(texto)-2,stdin);

    return texto;
}
