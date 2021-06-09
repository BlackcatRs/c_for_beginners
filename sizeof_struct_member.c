/*
sizeof( ((struct A*)0)->arr );

Briefly, cast a null pointer (0) to a type of struct A*, but since the operand of 
sizeof is not evaluated, this is legal and allows you to get size of struct
members without creating an instance of the struct.

Basically, we are pretending that an instance of it exists at address 0 and
can be used for offset and sizeof determination.

To further elaborate, read this article:
http://www.embedded.com/design/prototyping-and-development/4024941/Learn-a-new-trick-with-the-offsetof--macro

*/

#include <stdio.h>

typedef struct {
  char src[50];
  char dest[50];
  int age[3]; // 4*3 = 12 bytes reserved
} data;

int main() {
  printf("%d\n", sizeof(((data*)0)->age) ); // 12 bytes
  return 0;
}
