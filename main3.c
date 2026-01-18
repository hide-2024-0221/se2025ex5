#include <stdio.h>
#include <string.h> // strlenを使うために必要

int main(void){
    char str[] = "hello";
    
    // strlenは文字列の長さを返します（ヌル文字 '\0' は含みません）
    int length = strlen(str);
    
    printf("文字列: %s\n", str);
    printf("長さ: %d\n", length);
    
    return 0;
}