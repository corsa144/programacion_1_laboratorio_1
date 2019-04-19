#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "persona.h"

#define CANT 3

int main(){
    int opcion;
    ePersona pers[CANT];
    do{
        printf("ingrese:\n1.alta:\n2.mostrar\n3.Baja\n4.Modificacion\n5.Salir\n");
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

            baja( pers, CANT );
            break;
        case 4:

            modificacion( pers, CANT );
            break;
        case 5:

            break;

        }

    }while(opcion>=1&&opcion<=4);




    return 0;
}
