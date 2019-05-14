#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 10

void mostrarCadena(char* punteroCadena);

int main()
{
    char* punteroCadena;
    char cadena[CANT]="hola\0";
    punteroCadena=cadena;
    mostrarCadena(punteroCadena);
    return 0;
}

void mostrarCadena(char* punteroCadena)
{
    while(*punteroCadena != '\0')
    {
        printf("%c",*punteroCadena);
        punteroCadena++;
    }
}
