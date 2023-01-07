#include <stdio.h>

int main() {
 int n, i, j;
 printf("Enter the number of rows or columns: ");
 scanf("%d",&n);

int a[n][n];
for (int i = 0; i<n; i++){
    for(int j = 0; j < n;j++){
        a[i][j] = j+i+1;
        printf("%2d ",a[i][j]);
}
puts("");
}
   return 0; 
}
