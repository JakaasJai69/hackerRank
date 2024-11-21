/*

"Secure Assets Private Ltd", a small company that deals with lockers has recently started manufacturing digital locks which can be locked and unlocked using PINs (passwords). You have been asked to work on the module that is expected to generate PINs using three input numbers.

The three given input numbers will always consist of three digits each i.e. each of them will be in the range >=100 and <=999.

Bellow are the rules for generating the PIN.

The PIN should made up of 4 digits.
The unit (ones) position of the PIN should be the least of the units position of the three numbers.
The tens position of the PIN should be the least of the tens position of the three input numbers.
The hundreds position of the PIN should be least of the hundreds position of the three numbers.
The thousands position of the PIN should be the max of all digits in the three input numbers.
Input Format

three numbers

Constraints

all the numbers must be in the range of >=100 and <=999


*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int reverse(int a){
  int b,sum=0;
  while(a!=0){
    b=a%10;
    sum=sum*10+b;
    a=a/10;
  }
  return sum;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
  int i,j,b,c=9,d=0,sum=1;
  int a[3];
  for(i=0; i<3; i++){
    scanf("%d", &a[i]);
  }
  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
      b=a[j]%10;
      a[j] = a[j]/10;
      if(b<c){
        c=b;
      }
      if(b>d){
        d=b;
      }
    }
    sum=sum*10+c;
    c=9;
  }
  sum=sum*10+d; 
  printf("%d \n", reverse(sum)/10);

  return 0;
}

