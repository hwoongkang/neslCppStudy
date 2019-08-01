#include <stdio.h>

main(){
    int c;
    while((c=getchar())!=EOF){
        if(c=='\n'){
            putchar('\\');
            putchar('n');
        }else if(c=='\b'){
            putchar('\\');
            putchar('b');
        }else{
            putchar(c);
        }
    }
}