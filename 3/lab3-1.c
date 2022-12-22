#include <stdio.h>
#include <stdlib.h>

int main(){
    char input_str[4];
    int input;
    
    fgets(input_str,4,stdin);
    input = atoi(input_str);
    //input = atoi(input_str);
//fgets(input_str,4,stdin);

 while(input >= 0 ){
   printf("%d\n",input);
   input-=1;
    }
}
