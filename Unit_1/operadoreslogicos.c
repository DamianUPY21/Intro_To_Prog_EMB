#include <stdio.h>
#include <stdbool.h>

int main(int argc , char** argv)
{   
    int a = 10;
    int b = 15;
    int c = 1;
    int d = 8;
    int e = 10;

    bool condicion1 = (a > b);  //false
    bool condicion2 = (c < d);  //true
    bool condicion3 = (d == a); //false
    bool condicion4 = (d != a); //true
    bool condicion5 = (a >= e); //true
    bool condicion6 = (e <= e); //true


    if (condicion1 && condicion5){
        //some code 1
        //
        //
    } else
        //  ejecuta el 2, porque es una and 
        //
    }

    if (condicion1 || condicion5){
        // se ejecuta el uno porque es una or
        //
        //
    } else
        // some code 2
        //
    }
    return 0;
}
