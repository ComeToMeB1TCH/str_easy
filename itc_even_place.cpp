#include "str_easy.h"

string itc_even_place(string str){
    long long i = 1, a=itc_len(str);
    string che = "";
    while(i < a){
        che = che + str[i];
        i += 2;
    }
    return che;
}
