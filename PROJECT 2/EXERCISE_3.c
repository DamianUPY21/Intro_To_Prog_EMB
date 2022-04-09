#include <stdio.h>
//función para imprimir mis arreglos
void print_array(float array[], float len_array){
    printf("(");
    for (int i= 0; i<len_array; i++) printf("%f,",array[i]);
    printf(")\n");
    
}

//main
int main(){

    float farenh[] = {63, 73, -999, 91, 86, 82, 72, 81, 66, 77, 75, 104, -999, 84, 77, 66, 82, 63, 93, 72, 82, 64, 75 , 90, 64, -999, 99, 82, 95, 82};
    float celsius[] = {};

    printf("the list of values in °F is:");
    print_array(farenh,30);
    
    float v1;
    
    for (int i= 0; i< 30; i = i+1){
        v1 = farenh[i];
        if(v1<0){
            v1 = (v1+32)*0.5555;
        }else{
            v1 = (v1-32)*0.5555;
        }
        celsius[i] = v1;
    }
    printf("\nthe list of values in °C is:");
    print_array (celsius, 30);
    
    //imprimir el numero mayor y el menor
	
    float v2;
    for(int iterador=0; iterador<30; iterador++ ){
        for(int i=0; i<30; i++ ){
            v1 = celsius[i];
            v2 = celsius[i+1];
            if(v1>v2){
                celsius[i] = v2;
                celsius[i+1] = v1;
            }   
        } 
    }

    printf("\nThe maximum value of the degrees °C :%f\n", celsius[29]);
    //Promedio de °C
    
    v1 = 0;
    for (int i = 0; i<30; i++) v1 = v1 + celsius[i];
    v1 = v1/30;  
     
    
    printf("\nThe average of the degrees °C :%f\n",v1);

    return 0;
}
