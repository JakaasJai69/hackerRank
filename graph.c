#include <stdio.h>
#include <string.h>

int main(){
  int a,mul=1;
  scanf("%d", &a);
  while(mul<=10){
    printf("%d * %d = %d \n", a, mul, a*mul );
    mul++;
  }
}
