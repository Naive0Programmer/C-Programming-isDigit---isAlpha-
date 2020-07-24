#include <stdio.h>
int isDigit(char);
int isAlpha(char);
int main(){
    char i = 'a';
    printf("is %c a nuumber? %d\n", i, isDigit(i));// false = 0
    printf("is %c a char? %d\n", i, isAlpha(i)); // true = 1
    return 0;
}

int isDigit(char c){
    if(c >='0'&&c <='9'){
        return 1;
    }
    return 0;
}

int isAlpha(char c){
    if((c >= 'a' && c <= 'z') || (c >='A' && c <= 'Z')){
        return 1;
    }
    return 0;
}