    #include<stdio.h>
    #include<stdlib.h>

    #define cant 5
    int main()
    {
    int edad[cant],i;
    int edades[cant];
    float salario[cant];


    for(i=0;i<cant;i++)
    {
        printf("ingrese edad: ");
        scanf("%d",&edad[i]);
        printf("ingrese salario: ");
        scanf("%f",&salario[i]);

    }
    for (i=0;i<cant;i++)
    {
        printf("La edad es: %d\n",edad[i]);
        printf("El salario es: %.2f\n",salario[i]);
    }

    return 0;
    }
