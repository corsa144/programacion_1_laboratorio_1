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
#include <ctype.h>
#define CANT 5

int menu();
void baja(int legajo[],int estado[],int cantidad);
void alta(int legajo[],char apellido[][31],char nombre[][31],int edad[],int cantidad,int estado[]);
void modificacion(int legajo[],char apellido[][31],char nombre[][31],int edad[],int cantidad,int estado[]);
void listado(int legajo[],char apellido[][31],char nombre[][31],int edad[],int cantidad,int estado[]);

int main()
{
    int opcion,cantidad=CANT,edad[CANT],legajo[CANT],estado[CANT];
    char apellido[CANT][31],nombre[CANT][31];

    for(int i=0;i<cantidad;i++){
        estado[i]=0;
    }
    do{
        system("cls");
        opcion=menu();

        switch(opcion){
        case 1:
            alta(legajo,apellido,nombre,edad,cantidad,estado);
            break;
        case 2:
            baja(legajo, estado, cantidad);
            break;
        case 3:
            modificacion(legajo,apellido,nombre,edad,cantidad,estado);
            break;
        case 4:
            listado(legajo,apellido,nombre,edad,cantidad, estado);
            break;
        case 5:
            break;

        };
    }while(opcion>=1&&opcion<=4);


    return 0;
}

    void alta(int legajo[],char apellido[][31],char nombre[][31],int edad[],int cantidad,int estado[]){
        char rta,apellidoAux[31],nombreAux[31];
        int legajoAux,i,edadAux;
        do{
            printf("Ingrese legajo:\n");
            fflush(stdin);
            scanf("%d",&legajoAux);

            printf("Ingrese apellido:\n");
            fflush(stdin);
            fgets(apellidoAux, sizeof(apellidoAux)-2, stdin);
            printf("\n%s\n", apellidoAux);

            printf("Ingrese nombre:\n");
            fflush(stdin);
            fgets(nombreAux, sizeof(nombreAux)-2, stdin);

            printf("Ingrese edad:\n");
            fflush(stdin);
            scanf("%d",&edadAux);

            for(i=0;i<CANT;i++){
                if(estado[i]==0){
                    legajo[i]=legajoAux;
                    strcat(apellido[i],apellidoAux);
                    strcat(nombre[i],nombreAux);
                    edad[i]=edadAux;
                    estado[i]=1;
                }
            }

            printf("seguir[S/N]?");
            fflush(stdin);
            scanf("%c",&rta);
            rta=toupper(rta);

        }while(rta=='S');


    }
    void baja(int legajo[],int estado[],int cantidad){
        char rta;
        int legajoAux,i,flag=0;

        printf("legajo a buscar:");
        fflush(stdin);
        scanf("%d",&legajoAux);
        for(i=0;i<cantidad;i++){
            if(legajo[i]==legajoAux){
                printf("%d",legajo[i]);
                do{
                printf("dar de baja el registro s/n?");
                fflush(stdin);
                scanf("%c",&rta);
                rta=toupper(rta);
                }while(rta!='S'&&rta!='N');
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
    int menu(){
            int mostrar;
            printf("1.Altas:\n2.Bajas:\n3.Modificacion:\n4.Listado:\n5.Salir\n");
            fflush(stdin);
            scanf("%d",&mostrar);
            return mostrar;
    }
    void modificacion(int legajo[],char apellido[][31],char nombre[][31],int edad[],int cantidad,int estado[]){
        int legajoAux,flag=0,opcion;
        printf("Ingrese legajo a modificar:\n");
        fflush(stdin);
        scanf("%d",&legajoAux);
        for(int i=0;i<cantidad;i++){
            if(legajoAux==legajo[i]&&estado[i]==1){
                do{
                    printf("El apellido es: %s\n ",apellido[i]);
                    printf("El nombre es: %s\n",nombre[i]);
                    printf("La edad es: %d\n\n",edad[i]);
                    flag=1;

                    printf("\nIngrese 1.Apellido:\n2.Nombre:\n3.Edad:\n4.Ninguno: \n");
                    fflush(stdin);
                    scanf("%d",&opcion);
                    switch(opcion){
                        case 1:
                            printf("Ingrese nuevo apellido:\n");
                            fflush(stdin);
                            scanf("%s",apellido[i]);
                            break;
                        case 2:
                            printf("Ingrese nuevo nombre:\n");
                            fflush(stdin);
                            scanf("%s",nombre[i]);
                            break;
                        case 3:
                            printf("Ingrese nueva edad:\n");
                            fflush(stdin);
                            scanf("%d",&edad[i]);
                            break;
                        case 4:
                            break;
                    }
                }while(opcion>=1&&opcion<=3);
            }
        }
        if (flag==0){
            printf("No se encontro el legajo a modificar\n");
        }

    }
    void listado(int legajo[],char apellido[][31],char nombre[][31],int edad[],int cantidad,int estado[]){

        char apellidoAuxI[31],apellidoAuxJ[31],apellidoAux[31],nombreAux[31];
        int legajoAux,edadAux,estadoAux, i, j;
        for(i=0;i<cantidad-1;i++){
            for(j=i+1;j<cantidad;j++){
                strcat(apellidoAuxI,strupr(apellido[i]));
                strcat(apellidoAuxJ,strupr(apellido[j]));
                printf("apellido[%d]: %s", i, apellido[i]);
                printf("apellido[%d]: %s", j, apellido[j]);

                if(apellido[i]>apellido[j]){

                printf("apellido");
                    strcpy(apellidoAux,apellido[j]);
                    strcpy(apellido[j],apellido[i]);
                    strcpy(apellido[i],apellidoAux);

                printf("nombre");
                    strcpy(nombreAux,nombre[j]);
                    strcpy(nombre[j],nombre[i]);
                    strcpy(nombre[i],nombreAux);

                printf("lrgajo");
                    legajoAux=legajo[j];
                    legajo[j]=legajo[i];
                    legajo[i]=legajoAux;

                printf("edad");
                    edadAux=edad[j];
                    edad[j]=edad[i];
                    edad[i]=edadAux;

                printf("estado");
                    estadoAux=estado[j];
                    estado[j]=estado[i];
                    estado[i]=estadoAux;
                }
            }
        }

                printf("listado");
        system("cls");
        printf("La lista ordenada por apellido es:\n");
        for(int i=0;i<cantidad;i++){
            printf("%s %s %d %d",apellido[i],nombre[i],legajo[i],edad[i]);
        }
    }
