#include <stdio.h>

int main() {
  FILE *my_file;

  char ch;
  my_file = fopen("main.c", "r");

  if (my_file == NULL) {
    printf("Failed to Oen the main File");
  } else {
    printf("Opened file Successifully");
  }
  while ((ch = getc(my_file)) != EOF) {
    putc(ch, stdout);
  }
  return 0;
}
