/*

zipcodes consists of 5 consecutive digits. Given a string, write a function to
determine whether the input is a valid zip code. a valid zipcode is as follows
1. must contain only numbers.
2. it should not contain any spaces.
3. length should be only 5.

Input Format

A string

Constraints

no

Output Format

true or false

*/

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  
  char a[100];
  scanf("%99s", a);
  int len=strlen(a), i;
  if(len != 5){
    printf("false \n");
    return 0;
  }
  for(i=0; i<len; i++){
    if(!isdigit(a[i])){
      printf("false \n");
      return 0;
    }
  }
  printf("true \n");
  return 0;
}
