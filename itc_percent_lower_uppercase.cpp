#include "str_easy.h"

double itc_percent_lower_uppercase(string str)
{
    double k = 0, a = 0;
    int i = 0, len = itc_len(str);
    while (len >= 0){
        if ((str[i] > 64) && (str[i] < 91)){
            k++;
        }
        else if ((str[i] > 96) && (str[i] < 123)){
            a++;
        }
        i++;
        len--;
    }
    return (k/a*100);
}
