/*

create a function that returns the index of first vowel in a string

Input Format

a string

Constraints

no

Output Format

an int value

*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
  char a[100];
  scanf("%99s", a);
  int len=strlen(a), i;
  for(i=0; i<len; i++){
    if(tolower(a[i])=='a' || tolower(a[i])=='e' || tolower(a[i])=='i' || tolower(a[i])=='o' || tolower(a[i])=='u'){
      printf("%d", i);
      break;
    }
  }
  return 0;
}
