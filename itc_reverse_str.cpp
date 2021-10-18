#include "str_easy.h"

string itc_reverse_str(string str){
    long long i=1;
    string che = "";
    while(i<=itc_len(str)){
        che = che + str[itc_len(str)-i];
        i++;
    }
    return che;
}
