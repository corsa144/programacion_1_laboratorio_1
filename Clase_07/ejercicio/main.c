/**
1) Realizar una agenda para guardar los datos de hasta 100 personas de las cuales se toman los siguientes datos:

o	Apellido
o	Nombre
o	Legajo (NO SE PUEDE REPETIR)
o	Edad
o	Estado
1.	Realizar un programa con un menú de opciones para hacer:
a.	altas
b.	bajas
c.	modificaciones (ABM) de una agenda.

2.	Mostrar un listado ordenado por Apellido.
funciones:ALTA,BAJA,MODIFICAR.
**/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 5

int main()
{
    for(i=0;i<CANT;i++){
        estado[i]=0;
    }
    do{
        system("cls");
        printf("hago el menu");
        scanf("%d,&opcion");
        switch(opcion){
        case 1:
            alta(legajo,apellido,nombre...)
        case 2:
            baja(legajo,estado,CANT)
        }
    }while();
    printf("Ingrese el legajo a dar de alta:");
    scanf("% ",);
    for(i=0;i<CANT;i++){
        if(estado[i]==0){



            estado[i]=1;
            break;
        }

    }
    return 0;
}

    void alta(int legajo[],char *apellido[],char *nombre[]...){}
    int menu(){
        printf("");
        scanf();
        return
    }
    void baja(int legajo[],int estado[],int cantidad){
        char rta;
        int legajoAux,i,flag=0;

        printf("legajo a buscar:");
        scanf("%d",&legajoAux)
        for(i=0;i<cantidad;i++){
            if(legajo[i]==legajoAux){
                printf("%d",legajo);
                do{
                printf("dar de baja el registro s/n?");
                fflush(stdin);
                scanf("%c",&rta);
                rta=toupper(rta);
                }while(rta!='s'&&rta!='n');
                flag=1;
                if(rta=='s'){
                    estado[i]=0;
                    break;
                }else{
                    printf("no se dio de baja el registro");
                }
            }
           if(flag==0) {
            printf("legajo inexistente");
           }
        }
    }
