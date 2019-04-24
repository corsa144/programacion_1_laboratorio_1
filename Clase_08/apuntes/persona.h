#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED


   typedef struct{
        char apellido[31];
        char nombre[31];
        int edad;
        int isEmpty;
    }ePersona;


    ePersona alta(ePersona per);

#endif // PERSONA_H_INCLUDED
