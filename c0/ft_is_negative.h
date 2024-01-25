#ifndef FT_IS_NEGATIVE
#define FT_IS_NEGATIVE
#include <unistd.h>

void ft_is_negative(int c);
void ft_is_negative(int c){
    char p = 'P';
    char n = 'N';

    if(c >= 0){
        write(1,&p,1);
    }
    else{
        write(1,&n,1);
    }
}

#endif