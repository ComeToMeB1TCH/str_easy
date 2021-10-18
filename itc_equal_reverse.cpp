#include "str_easy.h"

bool itc_equal_reverse(string str){
    string strr;
    strr = itc_reverse_str(str);
    if(strr==str){
        return 1;
    }else{
        return 0;
    }
}
