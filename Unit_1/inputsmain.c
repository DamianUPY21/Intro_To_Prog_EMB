#include <stdio.h>

int main(int argc , char** argv)
{
    char* nombre = argv[1];
    char* apellido = argv[2];
    char* age = argv[3];
    char* state = argv[4];
    printf("you enter a name as:%s\n",nombre);
    printf("you enter a last name as:%s\n",apellido);
    printf("you enter a age as: %s\n",age);
    printf("you enter a state as: %s\n",state);
    return 0;
}
