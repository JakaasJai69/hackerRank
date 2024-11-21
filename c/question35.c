/*
The IT company "Soft ComInfo" has decided to transfer its messages through the
N/W using new encryption technique. The company has decided to encrypt the data
using the non-prime number concept. The message is in the form of a number and
the sum of non-prime digits present in the message is used as the encryption
key. Write an algorithm to determine the encryption key. note: Digit 1 and 0 are
considered as a prime number.

Input Format

The input consists of an integer numMsg representing the numeric form of the
message.

Constraints

no

Output Format

print an integer representing the encryption key.

*/

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isPrime(int a) {
  if (a==0 || a == 1 || a==2) return true;
  for (int i = 2; i <= sqrt(a); i++) {
    if (a % i == 0) return false;
  }
  return true;
}

int main() {

  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int a, b, sum=0;
  scanf("%d", &a);
  while(a!=0){
    b=a%10;
    if(!isPrime(b)){
      sum=sum+b;
    }
    a=a/10;
  }
  printf("%d", sum);
  return 0;
}
