#include <stdio.h>

int main(void){
  int value = 1;
  while(value < 10){
    printf("value not yet 10... %i\n",value);
    value += 1;
  }
  printf("done!\n");
}