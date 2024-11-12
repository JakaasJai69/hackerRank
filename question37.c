/*

Implement a program to calculate toggle case of each characters of a string

Input Format

A String from user

Constraints

non-empty String

Output Format

toggle case string

*/

#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char a[100];
  scanf("%99s", a);
  int i, len = strlen(a);
  for (i=0; i<len; i++) {
    if(islower(a[i])){
      a[i] = toupper(a[i]);
    } else {a[i] = tolower(a[i]);} 
  }
  printf("%s", a);
  return 0;
}
