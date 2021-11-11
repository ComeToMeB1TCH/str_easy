#include "str_easy.h"

double itc_percent_lower_uppercase(string str)
{
    double k = 0, a = 0, i = 0;
    int len = itc_len(str);
    while (i < len){
        if ((str[i] > 65) && (str[i] < 90)){
            k++;
        }
        else if ((str[i] > 96) && (str[i] < 123)){
            a++;
        }
        i++;
    }
    return (a / k);
}
