#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(int argc , char** argv)
{  
    printf("Welcome to the program, the number entered was:%s \n",argv[1]);
    
    int number = atoi(argv[1]);
    bool IsDivided = number%2==0;
    
    if(IsDivided){
        printf("you enter a even number:%i\n",number);
    
    }else{ 
        printf("you enter an odd number :%i\n",number);

    }
    
    return 0;
}
