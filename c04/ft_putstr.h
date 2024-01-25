#ifndef FT_PUTSTR_H
#define FT_PUTSTR_H
#include <unistd.h>
void ft_putstr(char *str);
void ft_putstr(char *str) {
    while (*str != '\0') {
    if( *str != '\0'){    
        write(1,str,1);
        str++;
    }
    }
}
#endif