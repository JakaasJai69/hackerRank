/*

Create a function that tests whether or not an integer is a perfect number. A
perfect number is a number that can be written as sum of its factors. (equal to
sum of its proper divisors) excluding the number itself.

Input Format

a number from the user

Constraints

n>0

Output Format

true or false

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */

  int a, b=1, sum=0;
  scanf("%d", &a);
  while(b<a){
    if(a%b==0){
      sum=sum+b;
    }
    b++;
  }
  printf("%s", sum==a ? "true" : "false");
  return 0;
}
