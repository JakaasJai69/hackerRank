/*
An e-Commerce company plans to give thier customers a discount for the newyears
holiday. The discount will be calcualted on the basis of the bill amount of the
order place. The discount amount is the product of the sum of all odd digits and
the sum of all even digits of the customers total bill amount.

Input Format

an integer bill amount, representing the total bill amount of the customer.

Constraints

no

Output Format

print an integer representing the discount amount for the given total bill.

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int a,b,sumOdd=0, sumEven=0;
  scanf("%d", &a);
  while (a!=0){
    b=a%10;
    if (b%2==0) {
      sumOdd = sumOdd + b ;
    } else{sumEven=sumEven+b;}
  }
  printf("%d \n", sumOdd * sumEven);

  return 0;
}
