#include "str_easy.h"

string itc_even_place(string str){
	if (itc_len(str) <= 1) {
		return "-1";
	}
    long long i = 1, a=itc_len(str);
    string che = "";
    while(i < a){
        che = che + str[i];
        i += 2;
    }
    return che;
}
