/*
Jackson, a math student, is developing an application on prime numbers. for the
given two integers on the display of the application, the user has to identify
all the prime numbers within the given range (including the given values).
afterwards the application will sum all those prime numbers. Jackson has to
write an algorithm to find the sum of all the prime numbers of the given range.
Write an algorithm to find the sum of all the prime numbers of the given range.

Input Format

two space sepearted integers RL and RR.

Constraints

no

Output Format

sum of the prime numbers between RL and RR.

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isPrime(int a){
  if(a == 1 || a==2){
    return true;
  }
  if(a <= 0){
    return false;
  }
  int i;
  for(i=2; i<=sqrt(a); i++){
    if(a%i==0){
      return false;
    }
  }
  return true;
}

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int a,b,sum=0,i;
  scanf("%d%d", &a, &b);
  for(i=a; i<=b; i++){
    if(isPrime(i)){
      sum=sum+i;
    }
  }
  printf("%d \n", sum);
  return 0;
}
