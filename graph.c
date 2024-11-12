#include <stdio.h>
#include <string.h>

int main(){
  int a,mul=1;
  scanf("%d", &a);
  while(a!=1){
    mul*=a;
    a--;
  }
  printf("%d \n", mul);

}
