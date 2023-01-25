#include <stdio.h>
#include <stdlib.h>

int main() {
  int x,count;
printf("Enter n: ");
    scanf("%d", &x);
for (int i = -(x-1); i<=x-1; i++ ){
    count = x-abs(i);
    for(int i =0; i<count;i++){
        if (i % 2 == 0){
        printf("-");
        }else{
            printf("x");
        }
    }
    puts("");
  }
}
