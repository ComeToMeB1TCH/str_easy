#include "str_easy.h"

long long itc_len(string a){
    long long k=0,i=0;
    while(a[i] != '\0'){
        k++;
        i++;
    }
    return k;
}
