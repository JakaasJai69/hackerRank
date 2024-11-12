/*
Create a function/method that takes a string and return the word count. The
string will be a sentence.

Input Format

A string

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char a[100];
  fgets(a, sizeof(a)-1, stdin);
  int i, len=strlen(a), temp=1;
  for(i=0; i< len; i++){
    if(a[i] == ' '){
      temp+=1;
    }
  }
  printf("%d", temp);
  return 0;
}
