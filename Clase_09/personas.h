#ifndef PERSONAS_H_INCLUDED
#define PERSONAS_H_INCLUDED

typedef struct{
    int id;
    char descripcion[31];
}eNacion;

typedef struct{
    int dia;
    int mes;
    int anio;
}eFecha;

typedef struct{
    char apellido[31];
    char nombre[31];
    char sexo;
    int legajo;
    eFecha fechaNac;
    int idNacionalidad;
    int edad;
    int isEmpty;
}ePersona;

void alta( ePersona pers[], int cantidad );

void mostrarUno( ePersona per );

void mostrarTodos( ePersona pers[], int cantidad );

void ordenar( ePersona pers[],int cantidad);

void baja(ePersona pers[], int cantidad );

#endif // PERSONAS_H_INCLUDED
