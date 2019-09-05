#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "array.h"
#define CANTIDAD_EMPLEADOS 5
#define DATO_INVALIDO -1
#define false 0
#define true 1


int array_mostrar(int* pArray, int limite);

int main()
{
    int edades[CANTIDAD_EMPLEADOS] = {22,1,44,2,1};
    int i;
    int array[CANTIDAD_EMPLEADOS]= {22,1,44,2,1};
    int limite=CANTIDAD_EMPLEADOS;
    int ordenado;

   /*for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        if(utn_getEntero(&edades[i],2,"\nEdad?","\nEdad fuera de rango",0,200)==-1)
        {
            edades[i] = DATO_INVALIDO;
        }
    }*/

    array_minimoDesde(edades, CANTIDAD_EMPLEADOS, 0, i);
    array_mostrar(edades,CANTIDAD_EMPLEADOS);
    printf("\n%d",i);
    //insertion(data[CANTIDAD_EMPLEADOS],limite);
     ordenado=ordenamiento( array, limite);
     if(ordenado==0){
       printf("\n%d\n%d\n%d\n%d\n%d",array[0],array[1],array[2],array[3],array[4]);
     }

    return 0;
}
/*int array_minimoDesde(int* pArray, int limite, int desde, int* pMinimo)
{
    int retorno=-1;
    int j;
    int auxiliarValorMinimo;
    int auxiliarIndiceMinimo;
    int flagPrimerMinimo = false;
    if(pArray != NULL && limite >= desde && pMinimo != NULL)
    {
        for(j=0;j<limite;j++)
        {
            if (flagPrimerMinimo == false)
            {
                auxiliarValorMinimo = pArray [j];
                flagPrimerMinimo = true;
            }
            else if(pArray[j] < auxiliarValorMinimo)
            {
                auxiliarIndiceMinimo = pArray[j];
            }
        }
    retorno = 0;

    }


    return retorno;
}*/



