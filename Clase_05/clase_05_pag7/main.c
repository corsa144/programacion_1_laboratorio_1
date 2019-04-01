    #include <stdio.h>
    #define MAX 3
    void main(void)
    {
        int edad[MAX],i,leg;
        float sueldo[MAX],suma=0,prom,aux;
        char seguir;
    for(i=0;i<MAX;i++)
    {
        edad[i]=0;
        sueldo[i]=0;
    }
    do
    {
        printf("Ingrese Legajo\n");
        scanf("%d",&leg);
        printf("Ingrese Edad\n");
        scanf("%d",&edad[leg-1]);
        printf("Ingrese el sueldo\n");
        scanf("%f",&aux);
        sueldo[i]=aux;
        printf("Desea ingresar otro dato S/N?\n");
        fflush(stdin);
        scanf("%c",&seguir);
    }while(seguir=='s');
    for(i=0;i<MAX;i++){
        suma=suma+sueldo[i];

    }
        prom=suma/MAX;
        printf("El sueldo promedio es: %.2f\n",prom);
    }
