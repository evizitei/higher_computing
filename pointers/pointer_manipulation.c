#include <stdio.h>

int main(void){
  int value = 100;
  int *value_ptr = &value;
  *value_ptr =123;
  printf("the new value is %d",value);
}