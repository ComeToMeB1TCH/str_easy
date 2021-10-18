#include "str_easy.h"

int itc_count_char_in_str(char ch, string str){
    long long k = 0, i = itc_len(str);
    while(i >= 0){
        if(str[i] == ch){
            k++;
        }
    i--;
    }
    return k;
}
