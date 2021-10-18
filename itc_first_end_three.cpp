#include "str_easy.h"

void itc_first_end_three(string str){
    string str0;
    int a;
    if(itc_len(str) > 5){
        a=itc_len(str);
        cout << str[0] << str[1] << str[2] << str[a-3] << str[a-2] << str[a-1];
    }else{
        str0 = str[0];
        itc_print_copy_str(str0,itc_len(str));
    }

}
