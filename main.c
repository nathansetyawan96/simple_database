#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <sys/types.h>

typedef struct {
  char* buffer; // to store the read line
  size_t buffer_length; // to store the size of the allocated buffer 
  ssize_t input_length; // to store the return value
} InputBuffer;

InputBuffer* new_input_buffer() {
  InputBuffer* input_buffer = malloc(sizeof(InputBuffer));

  input_buffer->buffer = NULL;
  input_buffer->buffer_length = 0;
  input_buffer->input_length = 0;
  
  return input_buffer;
}

void prompt() {
  printf("db -> ");
}

void read_input() {

}

int main(int argc, char* argv[]) {
  InputBuffer* input_buffer = new_input_buffer();

  while(true) {
    prompt();
    read_input(input_buffer);
  }
}