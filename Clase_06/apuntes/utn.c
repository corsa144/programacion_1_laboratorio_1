#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"


static int getInt(int* pResultado);


int utn_getEntero(int* pEdad,int reintentos,char* msg,
                          char*msgErr,int min, int max)
{
    int retorno = -1;
    int auxiliarEdad;

    for(;reintentos > 0;reintentos--)
    {
        printf(msg);
        if(getInt(&auxiliarEdad) == 0)
        {
            if(auxiliarEdad >= min && auxiliarEdad < max)
            {
                *pEdad = auxiliarEdad;
                retorno = 0;
                break;
            }
            else
            {
                printf(msgErr);
            }
        }
        else
        {
            printf(msgErr);
            __fpurge(stdin);
        }
    }
    return retorno;
}






static int getInt(int* pResultado)
{
    if(scanf("%d",pResultado) == 1)
        return 0;
    return -1;
}

void getString(char *pResultado, char *pMensaje, char *pMensajeError,int minimo,int maximo,int reintentos)
{
    //int retorno=-1;
    char buffer[4096];
    //if (pResultado != NULL && pMensaje != NULL && pMensajeError != NULL)
 //   {
    do
    {
        printf("%s",pMensaje);
        __fpurge(stdin);
        fgets(buffer,sizeof(buffer),stdin);
        buffer[strlen(buffer)-1]='\0';
        if(strlen(buffer)>=minimo && strlen(buffer)<=maximo)
        {
            strncpy(pResultado,buffer,maximo+1);
      //      retorno = 0;
            break;
        }
        printf("%s",pMensajeError);
        reintentos--;

    }while(reintentos>=0);
  //  }

   // return retorno;
}
