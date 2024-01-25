#ifndef FT_PRINT_COMB2_H
#define FT_PRINT_COMB2_H
#include <unistd.h>

void ft_print_comb2();
void ft_print_comb2(){
    char space = ' ';
    char virgul = ',';
for(int a = 0; a <= 9; a++){
    char digita = a + '0';
    for(int b = 0; b <= 9; b++){
        char digitb = b + '0';
        for(int i = 0; i <= 9; i++){
            char digiti = i + '0';
            for(int j = 0; j <= 9; j++){
                char digitj = j + '0';
                write(1,&digita,1);
                write(1,&digitb,1);
                write(1,&space,1);
                write(1,&digiti,1);
                write(1,&digitj,1);
                write(1,&virgul,1);

            }
        }
    }
}
}


#endif