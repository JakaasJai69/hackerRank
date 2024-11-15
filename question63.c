/*

Create a function that takes a string and returns the number of vowels contained within it.

Input Format

A string from the user

Constraints

no

Output Format

number of vowels

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char a[100];
  fgets(a, sizeof(a), stdin);
  
  int len=strlen(a), i, count=0;
  for(i=0; i<len; i++){
    if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
      count+=1;
    }
  }
  printf("%d", count);
  return 0;
}
