#include <stdio.h>
#include <stdlib.h>

int edad = 25;
int mes = 2;

int main(int argc, char** argv){
    printf("la variable edad = %d\n", edad);
    printf("la direcci�n de la variable edad = %p\n", &edad);
    //creaci�n de pointer

    int* myPtr = NULL;
    myPtr = &edad;
    printf("la variable pointer 'myPtr' es igual a = %p\n", myPtr);
    printf("la direcci�n de la variable 'myPtr' = %p\n", &myPtr);
    
    //Modificar un pointer

    //edad = edad*2;  edad = 25*2 = 50
    myPtr = &mes; // cambiamos la dirrecci�n del pointer
    myPtr = &edad;

    //Problema = cambiar el valor de 'edad'
    printf("la valor de lo que apunta 'myPtr' = %d\n", *myPtr);
    printf("la valor de lo que apunta 'edad' = %d\n", edad);
    *myPtr = *myPtr*2;
    
    printf("-- Despues de la modificaci�n---\n");
    printf("el valor de lo que apunta 'myPtr' = %d\n", *myPtr);
    printf("el valor de la variable 'edad' = %d\n", edad);
    
    
    return 0;
}
