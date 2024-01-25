#ifndef FT_PRINT_COMB_H
#define FT_PRINT_COMB_H
#include <unistd.h>

void ft_print_comb();
void ft_print_comb(){
    int number = 9;
    
    for(int i = 0; i <= number; i++ ){
        char digiti = i + '0';
        char space = ' ';
        for(int j = 1;j <= number; j++){
            char digitj = j + '0';
            for(int k = 2; k<= number; k++){
                char digitk = k + '0';
                if( (i != j) && (i != k) && (j != k)){
                    write(1,&digiti,1);
                    write(1,&digitj,1);
                    write(1,&digitk,1);
                    write(1,&space,1);
                }
            }
        }

    }
    
}


#endif