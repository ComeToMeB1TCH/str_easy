#include "str_easy.h"

double itc_percent_lower_uppercase(string str)
{
    double k = 0, a = 0, i = 0;
    int len = itc_len(str);
    while (i < len){
        if ((str[i] > 64) && (str[i] < 90)){
            k++;
        }
        else if ((str[i] > 97) && (str[i] < 122)){
            a++;
        }
        i++;
    }
    return (a / k);
}
