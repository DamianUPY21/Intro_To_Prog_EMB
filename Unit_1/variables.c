#include <stdio.h>

//data type
// Enteros(int),decimales(float),caracteres(char),strings(char*)
//create a variable dataType anyName; | dataType anyName = #valor que quiera; //solo se declara una vez
//Definicion(int temp = 2;), Declaracion(int temp;), Ejecucion/LLamado...

//Declarar y definiendo un valor inicial
//Cada tipo de variable, tienen un formato de texto
int temp = 35; //%i,%d
float pi = 3.1416; //%f
char initial = 'G'; //%c
char* name = "Gualbert"; //%s
//otros formatos de texto//
// \n salto de línea
// \t espaciado es el famoso Tab

//arrays manera de crear listas de caracteres
int number[]= {78,25,1,5,6}; //array con numeros
char lastname[]={'C','e','t','i','n','a'}; //array con caracteres

int main(){
   //Ejecucion/llamado 
    printf("temperatura:%i\t, mi nombre es:%s\n,",temp,name);
    return 0;
}
