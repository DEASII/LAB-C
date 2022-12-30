#include <stdio.h>
#include <stdlib.h>

int main() {
  int x ,count;
  scanf("%d",&x);
  
  if(x <= 0 || x > 26) {
        puts("-");
        exit(1);
    }
    x=x-1; // เพราะ x = 2 คือ b >> 21012 มี 3 เอาไป ลบ 1 >> 101..bab 
  //จำนวน i ถึง -i >> 3,2,1,0,-1,-2,-3 //ลบ |x| เพื่อกับค่า
  //ให้ x = 4 //ได้ 1,2,3,4,3,2,1
  for (int i = x; i >= -x; i--){ 
  count = x-abs(i);
  //ปิดซ้าย
  for (int i = 0; i<x-(count); i++){
    printf("--");
  }//mid
  for (int i =0; i<count*2+1; i++ ){
     if (i>0){
    printf("-");
  }// 2,1,0,1,2 บวก 8 == 10,9,0,9,10 //8 มาจาก x-(count)
    printf("%c", (char)97+x-(count) + abs(count-i));
  }
  //ปิดขวา
  for (int i = 0; i<x-(count); i++){
    printf("--");
  }
  puts("");
  }
}
