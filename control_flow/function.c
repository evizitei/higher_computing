#include <stdio.h>

int test_function(void);

int main(void){
  printf("pre-function\n");
  test_function();
  printf("post-function\n");
  return 0;
}

int test_function(void){
  printf("running my function \n");
  return 1;
}