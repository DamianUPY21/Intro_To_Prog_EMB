#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char** argv){
    srand (time(NULL));
    
    printf ("1\n");
    printf ("2\n");
    printf ("3\n");
    printf ("4\n");

    int numero = 1;
    
    for (numero ;numero <= 5; numero = numero + 1){
        printf ("my number is: %d\n", numero);
    };
    
    bool IsTempetureLow = true;
    int sensorPin;
   
    while (IsTempetureLow){
        sensorPin = rand()%200;
        printf ("MysensorPin: %d\n", sensorPin);
        IsTempetureLow = (sensorPin <= 190);
    };
    
    
    return 0;
}
    
