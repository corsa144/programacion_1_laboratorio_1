#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

#define CANT 3

int main(){
    int opcion;
    ePersona pers[CANT];
    do{
        printf("ingrese:\n 1.alta:\n2.mostrar\n3.salir\n");
        scanf("%d",&opcion);
        switch(opcion){
        case 1:
            alta(pers, CANT);
            break;
        case 2:
            system("cls");

            mostrarTodos(pers, CANT);
            break;
        case 3:
            break;

        }

    }while(opcion>=1&&opcion<=2);




    return 0;
}
