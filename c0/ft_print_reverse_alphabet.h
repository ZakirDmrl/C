#ifndef FT_PRINT_REVERSE_ALPHABET_H
#define FT_PRINT_REVERSE_ALPHABET_H
#include <unistd.h>

void ft_print_reverse_alphabet();
void ft_print_reverse_alphabet(){
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    size_t size = sizeof(alphabet) - 1;
    for (size_t i = size-1; i > 0; i--){
        write(1,&alphabet[i],1);
    }
    write(1,&alphabet[0],1);
    
   
    
}

#endif