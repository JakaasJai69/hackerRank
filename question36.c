/*
Implement a program to return First capital letter in a String

Input Format

A string from the user

Constraints

non-empty string

Output Format

First Capital letter

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char a[100];
  scanf("%99s", a);
  int i, len = strlen(a);
  for (i=0; i<len; i++) {
    if(isupper(a[i])){
      printf("%c \n", a[i]);
      return 0;
    }
  }
  return 0;
}
