#include <stdio.h>
#include <stdbool.h>

int test2(int a1, int a2, int a3){
  if (a1+a2 == 0){
    return 0;
  }
  return a3/(a1+a2);
}

int reverseNumber(int n) {
    int reversed = 0;

    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return reversed;
}

int test(int a){
  reverseNumber(a);
  int b,c, sum=0;
  while(a != 0){
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    if (b+c%2==0){
      sum= sum*100+(b+c) + 2;
    } else{sum = sum*100 + (b+c) + 1;}
    b=0;
    c=0;
  }
  return sum;
}

int main() {
    int a;//1, a2, a3, a4, a5, a6, a7;
    scanf("%d", &a); //%d %d %d %d %d %d", &a); //1, &a2, &a3, &a4, &a5, &a6, &a7);
    
    //int a = a1 + a2 + a3;
    //int b = a4 + a5 + a6;
    //int result = (b != 0) ? a7 / b : 0;

    printf("%d\n", test(a));
    return 0;
}
