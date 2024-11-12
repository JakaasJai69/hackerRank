/*

Email name should be starts with alphabet and should follw by number or
underscore. It should contains either numbers or underscore finally ends with
@gmail.com only. Then given email id is true otherwise false.

Input Format

email id

Constraints

lowercase alphabet [a-z] followed by underscore or digit and @gmail.com

Output Format

true or false

*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char a[100];
  scanf("%99s", a);
  char *domain = "@gmail.com";
  int i = 0;

  char *at_position = strchr(a, '@');
  if (!at_position) {
    printf("false\n");
    return 0;
  }

  if (strcmp(at_position, domain) != 0) {
    printf("false\n");
    return 0;
  }
  int noAlpha=0;
  for (i = 0; a[i] != '@'; i++) {
    if(!isalpha(a[i]) && !noAlpha){
      noAlpha=1;
    } else {continue;}
    if (!(isdigit(a[i]) || a[i] == '_')) {
      printf("false\n");
      return 0;
    }
  }

  if (noAlpha){printf("true\n");} else {printf("false\n");}
  return 0;
}
