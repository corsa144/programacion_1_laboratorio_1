#include <stdio.h>
#include <stdlib.h>
#define CANT 5

int main()
{
    int dato[5];
    int acum=0,i;
    for(i=0;i<CANT;i++){
        printf("Edad:\n");
        scanf("%d",&dato[i]);

    }
    for(i=0;i<CANT;i++){
        printf("%d",dato[i]);
        acum=acum+dato[i];
    }
    system("cls");

    printf("El promedio de edad es:%d\n",acum/CANT);

    return 0;
}
