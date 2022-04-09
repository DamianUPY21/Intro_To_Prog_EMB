#include <stdio.h>
char str [255];
char lastname [255];
int age = 0;
char state [255];

int main()
{
    //ingresar variables
    printf("Enter a name: \n");
    scanf("%s", str);
    printf("Enter a last name: \n");
    scanf("%s", lastname);
    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("Enter your state: \n");
    scanf("%s", state);
    //imprimir las variables asignadas
    printf("you enter a name as: %s\n",str);
    printf("you enter a last name as: %s\n",lastname);
    printf("you enter a age as: %i\n", age);
    printf("you enter a state as: %s\n",state);
    return 0;
}
