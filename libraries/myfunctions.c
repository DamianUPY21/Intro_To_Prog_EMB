#include <stdio.h>
//primera funcion
bool IsEvenFunct( int numberToTest){
    bool IsEven = (numberToTest %2 == 0);
    if (IsEven) return true;

    return false;
}

void swap (int param1,int param2){
    int temp = param2;
    param1=param2;
    param2=param1;
    return;
}
                 //0xf11    0xf12                       
void swapAddress(int* ptr1, int* ptr2){
    //operadores de memoria
    //& "la direccion de __"
    // *"El valor de  la dirección___"
    int temp = *ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    return;
}
