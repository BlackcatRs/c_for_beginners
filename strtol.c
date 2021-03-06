/*
The C library function long int strtol(const char *str, char **endptr, int base)
converts the initial part of the string in str to a long int value according
to the given base, which must be between 2 and 36 inclusive, or be the special
value 0.
https://www.tutorialspoint.com/c_standard_library/c_function_strtol.htm
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
   char str[30] = "2030300 This is test";
   char *ptr;
   long ret;

   ret = strtol(str, &ptr, 10);
   printf("The number(unsigned long integer) is %ld\n", ret);
   printf("String part is %s \n", ptr);

   return(0);
}
