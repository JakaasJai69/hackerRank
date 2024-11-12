/*

Given an integer, create a function that returns the next prime. If the number
is prime, return the number itself.

Input Format

a number

Constraints

no

Output Format

prime number

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

int nextPrime(int a){
  int i;
  for(i=a+1; true; i++){
    if(isPrime(i)){
      return i;
    }
  }
}

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int a;
  scanf("%d", &a);
  isPrime(a) ? printf("%d", a) : printf("%d", nextPrime(a)); 
  return 0;
}
