#include <stdio.h>
#include <stdlib.h>
#define CANT 3

int main()
{
    int legajo[CANT];
    float nota1[CANT];
    float nota2[CANT];
    float nota3[CANT];
    int max,min,i,datos[i];


    for(i=0;i<CANT;i++){
        printf("Ingrese legajo:\n");
        scanf("%d",&legajo[i]);
        printf("Ingrese nota1:\n");
        scanf("%f",&nota1[i]);
        printf("Ingrese nota2:\n");
        scanf("%f",&nota2[i]);

    }
    for(i=0;i<CANT;i++){

        nota3[i]=((nota1[i]+nota2[i])/2);
        printf("Su promedio es:%.2f\n",nota3[i]);

    }





    for(i=0;i<CANT;i++){

        if(i==0||datos[i]>max){
            max=datos[i];
        }
        if(i==0||datos[i]<min){
            min=datos[i];
        }
    }
    return 0;
}

int vec[CANT]={2,7,6,3,8};
int i,j,aux;
for(i=0;i<CANT;i++){
    for(j=i+1;j<CANT;j++){
        if(vec[i]>vec[j]){
            aux=vec[i];
            vec[i]=vec[j];
            vec[j]=aux;
        }
    }
}


