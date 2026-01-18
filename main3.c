#include <stdio.h>
#include <string.h>

int main(void){
    char str[] = "hello";
    
    int length = strlen(str);
    
    printf("文字列: %s\n", str);
    printf("長さ: %d\n", length);
    
    return 0;
}