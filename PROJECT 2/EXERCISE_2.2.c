#include<stdio.h>
int main(){
  int i, num;
  
  printf("Enter the number: ");
  scanf("%d", &num);
  
  printf("Numbers Divisible by 3 and 5 Between 0 to %d are:\n", num);
  for (i = 1; i <= num; i++){
    if (i % 3 == 0 && i % 5 == 0){
      printf("[");
      printf("%d", i);
      printf("]");
    }
  }
  return 0;
}
