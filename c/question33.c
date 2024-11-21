/*

An e-commerce company plans to give their customers a discount for the newyears
holiday. The discount will be calcualted on the basis of the bill amount of the
order placed. The discount amount is the sum of all the odd digits in the
customers total bill amount. if no odd digits is present in the bill amount,
then discount will be zero.

Input Format

the input consists of an integer bill amount, representing the customers total
bill amount.

Constraints

print an integer representing the discount for the given total bill amount.

Output Format

n>0

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
    if(b%2!=0){
      sum+=b;
    }
    a=a/10;
    b=0;
  }
  printf("%d\n", sum);

  return 0;
}
