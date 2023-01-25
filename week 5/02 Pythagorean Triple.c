#include <stdio.h>
#include <stdlib.h>

int main() {
  int n ,c;
    scanf("%d",&n);
for (int a = 3; a<n; a++ ){
    for (int b = a+1; b<n-a; b++ ){
        c = n-a-b;
        if(a*a+b*b == c*c){
            printf("(%d, %d, %d)",a,b,c);
            exit(1);
        }   
    }
    }
    printf("No triple found.");
}
  
