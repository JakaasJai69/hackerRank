/*

Implement a program that returns the number of decimal places a number (given as a string) has. Any zeros after the decimal point count towards the number of decimal places.

Input Format

string from the user

Constraints

non empty string

Output Format

count of decimal places

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */

  char a[100];
  scanf("%s", a);

  int len=strlen(a), i, decPos=0;

  for(i=0; i<len; i++){
    if(a[i] == '.'){
      decPos=i+1;
      break;
    }
  }

  printf("%d", decPos==0 ? 0 : len-decPos);
  return 0;
}
