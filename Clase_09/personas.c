
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "personas.h"

void alta( ePersona pers[], int cantidad ){
    int i;

    for( i = 0; i < cantidad; i++ ){

        printf("legajo:\n");
        scanf("%d",&pers[i].legajo);

        printf("Apellido:\n");
        fflush(stdin);
        scanf("%s", pers[i].apellido);

        printf("Nombre:\n");
        fflush(stdin);
        scanf("%s", pers[i].nombre);

        printf("Edad:\n");
        scanf("%d", &pers[i].edad);

        printf("Dia:\n");
        scanf("%d",&pers[i].fechaNac.dia);

        printf("Mes:\n");
        scanf("%d",&pers[i].fechaNac.mes);

        printf("Anio:\n");
        scanf("%d",&pers[i].fechaNac.anio);

        printf("nacionalidad:\n1.Argentina\n2.Bolivia\n3.Paraguay\n4.Uruguay\n5.Brasil\n6.Otro\n");
        scanf("%d",&pers[i].idNacionalidad);

        pers[i].isEmpty = 0;
    }
}

void mostrarTodos( ePersona pers[], int cantidad ){
    int i;

    for( i = 0; i < cantidad; i++ ){
        mostrarUno(pers[i]);
    }

}

void mostrarUno( ePersona per ){
        printf("%d\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d", per.legajo,per.apellido, per.nombre, per.edad, per.isEmpty,per.fechaNac.dia,per.fechaNac.mes,per.fechaNac.anio,per.idNacionalidad);
}

void ordenar( ePersona pers[],int cantidad){
    int i,j;
    ePersona aux;
   // pers=strupr(pers);
    for ( i=0;i<cantidad-1;i++){

        for ( j=i+1;j<cantidad;j++){

            if (strcmp(pers[i].apellido,pers[j].apellido)>0){

                aux=pers[i];
                pers[i]=pers[j];
                pers[j]=aux;
            }
        }
    }
}

void baja(ePersona pers[], int cantidad ){

        char rta;
        int legajoAux,i,flag=0;

        printf("legajo a buscar:");
        fflush(stdin);
        scanf("%d",&legajoAux);
        for(i=0;i<cantidad;i++){
            if(pers[i].legajo==legajoAux){
                printf("%d",pers[i].legajo);
                do{
                printf("dar de baja el registro s/n?");
                fflush(stdin);
                scanf("%c",&rta);
                rta=toupper(rta);
                }while(rta!='S'&&rta!='N');
                flag=1;
                if(rta=='S'){
                    pers[i].isEmpty=1;
                    printf("Se dio de baja el registro:\n");
                    break;
                }else{
                    printf("no se dio de baja el registro");
                }
            }

        }
             if(flag==0) {
            printf("legajo inexistente");
           }
}
