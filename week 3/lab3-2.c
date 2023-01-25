#include <stdio.h>
#include <stdlib.h>
int main(){
    char input1_str[16];
    char input2_str[16];
    long long input1,input2;

    
    fgets(input1_str,16,stdin),input1 = atoll(input1_str);
    fgets(input2_str,16,stdin),input2 = atoll(input2_str);
    long long y = input1*input2,x;
 if (input2 > input1){
     input1 = input2;
     input2 = atoll(input1_str); 
    }

   while(x > 0){
        x = input1%input2;
        input1 = input2;
        input2 = x;
    }
   printf("GCD: %lld\nLCM: %lld",input1,y/input1);
   //printf("%lld %lld",input1,input2);
}
