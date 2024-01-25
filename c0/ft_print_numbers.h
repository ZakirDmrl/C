#ifndef FT_PRINT_NUMBERS_H
#define FT_PRINT_NUMBERS_H
#include <unistd.h>

void ft_print_numbers(void);
void ft_print_numbers(void){
    int number = 9;
    for(int i = 0; i <= number; i++ ){
        char digit = i + '0';
        write(1,&digit,1);
    }
}



#endif