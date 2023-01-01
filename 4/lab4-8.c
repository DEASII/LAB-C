#include <stdio.h>

void decimal_to_binary(int n) {
  if (n == 0) {
    return;
  }
  decimal_to_binary(n / 2);
  printf("%d", n % 2);
}

int main() {
  int n;
  scanf("%d", &n);
  
if (n == 0){
    printf("%d",n);}
else{
  decimal_to_binary(n);
  }

  return 0;
}
Credit: ปัญญาประดิษฐ์
