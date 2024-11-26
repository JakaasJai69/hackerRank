#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int reverseNumber(int n) {
  int reversed = 0;

  while (n != 0) {
    int digit = n % 10;
    reversed = reversed * 10 + digit;
    n /= 10;
  }

  return reversed;
}

void test2() {
  int a;
  scanf("%d", &a);
  while (a != 0) {
    printf("The Square and cube of %d: %d and %d", a, a * a, a * a * a);
    a--;
  }
}

void test3() {
  int a, b;
  scanf("%d", &a);
  b = -a;
  while (a > (b - 1)) {
    if (a % 17 == 0) {
      printf("%d ", a);
    }
    a--;
  }
}

#include <stdio.h>

void test4() {
  int a, b;
  scanf("%d", &a);

  a -= a % 17;
  b = -a;
  while (a >= b) {
    printf("%d ", a);
    a -= 17;
  }
}

void test5() {
  int a, b;
  scanf("%d", &a);
  a -= a % 17;
  b = -a;
  while (a >= b) {
    if (a % 2 == 0) {
      printf("%d", a + 3);
    } else {
      printf("%d", a + 5);
    }
  }
}

bool isPrime(int a) {
  int i = 2;
  if (a == 1 || a == 2) {
    return true;
  }
  if (a % i == 0) {
    return false;
  }
  if (i >= sqrt(a)) {
    return true;
  }
  i++;
  return isPrime(a);
}

int add(int a) {
  int b, sum = 0;
  while (a != 0) {
    b = a % 10;
    sum += b;
    a = a / 10;
  }
  return sum;
}

void test6() {
  int a, b;
  scanf("%d", &a);

  a -= a % 17;
  b = -a;
  while (a >= b) {
    if (isPrime(add(a))) {
      printf("%d ", a);
      a -= 17;
    }
  }
}

int test(int a) {
  int b, i, sum = 0, temp = 1;
  while (a != 0) {
    b = a % 10;
    if (!isPrime(b)) {
      sum = sum * 10 + (b + b);
    } else {
      sum = sum * 10 + b;
    }
    a = a / 10;
  }
  return sum;
}

int countDigit(int a){
  int count=0;
  while(a!=0){
    a/=10;
    count+=1;
  }
  return count;
}

int reverse(int a){
  int b, reversed=0;

  while(a!=0){
    b=a%10;
    reversed=reversed*10+b;
    a/=10;
  }
  return reversed;
}

int sum(int a){
  int sum=0, b;

  while(a!=0){
    b=a%10;
    sum+=b;
    a/=10;
  }
  return sum;
}

void test7(){
  int a;
  scanf("%d", &a);

  int half=countDigit(a);

  printf("%d \n", half);

  if(half%2==0){
    half=half/2;
  } else{ half=(half+1)/2;}

  printf("%d \n", half);

  int first=a / pow(10, half);
  int last=a % (int)pow(10, half);

  printf("%d \n", first);
  printf("%d \n", last);

  int reversedLast=reverse(last);

  printf("%d \n", reversedLast);
  
  printf("%d \n", first + sum(reversedLast));

}

int main() {
  test7();
  return 0;
}
