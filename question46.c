/*
Program to read date, month and year from the user and check whether it is magic
date or not. Here are the rules for magic date.

1) mm*dd is a 1-digit number that matches the last digit in YYYY
2) mm*dd is a 2-digit number that matches the last two digits in YYYY
3) mm*dd is a 3-digit number that matches the last three digits in YYYY

Input Format

three int values

Constraints

no

Output Format

true or false

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int d, m, y;
  scanf("%d-%d-%d", &d, &m, &y);
  if((m*d >=0 && m*d<=9 && m*d == y%10) || (m*d <= 99 && m*d >=10 && m*d == y%100) || (m*d >=100 && m*d <= 999 && m*d == y%100)){
    printf("true");
  } else { printf("false");}
  return 0;
}
