/*
A company wishes to devise an order confirmation procedure. They plan to require
an extra confirmation instead of simply auto-confirming the order at the time it
is placed. for this purpose, the system will generate one time password to be
shared with the customer. The customer who is placing the order has to enter the
OTP to confirm the order. The OTP generated for the requested order ID, as the
product of the digits in orderID. ** **Write an algorithm to find the OTP for
the OrderID.

Input Format

an intger representing order id

Constraints

no

Output Format

an integer representing OTP

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int a,b,sum=1;
  scanf("%d", &a);
  while(a!=0){
    b=a%10;
    sum=sum*b;
    a=a/10;
  }
  printf("%d \n", sum);
  return 0;
}
