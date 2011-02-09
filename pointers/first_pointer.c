#include <stdio.h>

int main(void){
  unsigned short int total = 50;
  unsigned short int * total_pointer = &total;
  printf("The total is %d",total);
  printf("the address is %d",total_pointer);
  printf("the value pointed to is %d",*total_pointer);
}