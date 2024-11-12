/*

Given a valid IP address, return a defanged version of that IP address. A
defanged IP address replaces every period '.' with "[.]".

Input Format

A string

Constraints

non-empty String

Output Format

replacement String

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char a[100];
  scanf("%99s", a);
  int i, j=0, len=strlen(a);
  char b[100];
  for(i=0; i<len; i++){
    if(a[i] == '.'){
      b[j] += '[';
      b[j+1] += '.';
      b[j+2] += ']';
      j+=3;
    } else { b[j] += a[i]; j++;}
  }
  b[j]+='\n';
  printf("%s", b);
  return 0;
}
