/*

Given s string, implement a program to find max occurring character in the given string.

Input Format

A string

Constraints

No

Output Format

max occuuring character

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  char a[100];
  scanf("%99s", a);
  int len=strlen(a), i, j, maxIndex=0, temp=0, max=0;
  char cmp;
  for(i=0; i<len; i++){
    cmp=a[i];
    for(j=0; j<len; j++){
      if(a[j]==cmp){
        temp+=1;
      }
    }
    if(max<temp){
      max=temp;
      maxIndex=i;
    }
    temp=0;
  }
  printf("%c", a[maxIndex]);
  return 0;
}
