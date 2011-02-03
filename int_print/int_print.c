#include <stdio.h>

int main(void){
  unsigned int message_length = printf("Hello World");
  unsigned int total_chars = message_length + printf("...message length was: %d",message_length);
  printf("%d",total_chars);
}