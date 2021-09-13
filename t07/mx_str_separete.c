#include <stdbool.h>
#include <stdlib.h>

void mx_printchar(char c);
static void newline(bool *flag);

static void newline(bool *flag){
    if(*flag){
        mx_printchar('\n');
        *flag = false;
    }
}

void mx_str_separate(const char *str, char delim){
    int i = 0;
    bool flag = true;

    if(!str){
        return;
    }else{
        while(str[i]){
            if(str[i] == delim){
                newline(&flag);
            }else{
                mx_printchar(str[i]);
                flag = true;
            }
            i++;
        }
        newline(&flag);
    }
}
