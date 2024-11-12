/*

A company launched a new text editor that allows users to enter english letters,
numbers and white spaces only. If a user attempts to enter any other type of
characters, it is counted as miss. Given a String text, write an algorithm to
help the developer detect the number of misses by a given user in the given
input.

Input Format

String

Constraints

non-empty string

Output Format

number of misses

*/

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char a[100];
  fgets(a, 100, stdin);
  int i, len = strlen(a), count=0;
  for (i = 0; i < len; i++) {
    if (!(isalpha(a[i]) || isdigit(a[i]) || a[i] == ' ')) {
      count++;
    }
  }
  printf("%d", count);

  return 0;
}
