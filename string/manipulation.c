#include <stdio.h>

int main(void){
  char array_var[] = "Here I stand, I can do no other";
  char *pointer = array_var;
  
  printf("the full string is %s \n", array_var);
  printf("the first character is %c \n",*pointer);
  pointer += 1;
  printf("the second character is %c \n",*pointer);
  pointer += 4;
  *pointer = 'i';
  printf("the self reference character is %c \n",*pointer);
  printf("the full string is NOW %s \n", array_var);
}