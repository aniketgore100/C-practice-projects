#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main(){
    char c;
    while((c=getchar())!=EOF){
        int i,j;
                bool flag = false;
            for(j=0;j<strlen(s);j++)
                if(c==s[j]){
                    flag=true;
                     putchar(s[j-1]);
                }
        if(flag==false)
            putchar(c);
    }
    return 0;
}