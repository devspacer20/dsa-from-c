#include <stdio.h>
int main(){
  int i = 3;
  printf("address of i is %u\n",&i);
  printf("value of i is %d\n",i);
  printf("value of i is also %d", *(&i));
  return 0;
}
