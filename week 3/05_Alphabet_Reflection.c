#include <stdio.h>
#include <stdlib.h>

int main() {
  int x = 10;
  for (int i =0; i<x*2-1; i++ ){
    printf("%c",(char)97+abs(x-i-1));
  if (i<x*2-2){
    printf("-");
  }
  }
}
