/*

Create a function that determines whether a number is Oddish or Evenish. A
number is Oddish if the sum of all of its digits is Odd, and number is Evenish
if the sum of all of its digits is even, if a number is Oddish return Oddish
else return Evenish.

Input Format

a number

Constraints

n>0

Output Format

Oddish or Evenish
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int a, b, sum=0;
  scanf("%d", &a);
  while(a!=0){
    b=a%10;
    sum+=b;
    a=a/10;
  }
  printf("%s", sum%2==0?"Evenish" : "Oddish");
  return 0;
}
