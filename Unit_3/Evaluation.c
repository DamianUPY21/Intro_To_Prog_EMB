#include <stdio.h>
int arreglo[] = {5,10,3,1,9};
int i, j, n, aux;

int main() {

    n = 5;
    for(i=1; i<n; i++) {
        j = i;
        aux = arreglo[i];
        while(j>0 && aux<arreglo[j-1]) {
            arreglo[j] = arreglo[j-1];
            j=j-1;
        }
            arreglo[j] = aux;
                    }          
        printf("\n\nLos elementos ordenados del arreglo son: \n");
    for(i=0; i<n; i++) {
    printf("Elemento [%d]: %d\n", i, arreglo[i]);
                    };

return 0;
}