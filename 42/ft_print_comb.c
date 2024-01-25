#include <unistd.h>


void ft_print_comb(void);
void ft_print_comb(void){
    int number = 9;

    for(int i = 0; i < number; i++){
        char digiti = i + '0';
        char space = ' ';
        for (int j = 0; j < number; j++){
            char digitj = j + '0';
            for(int k = 0; k < number; k ++){
                char digitk = k + '0';
                if( (i != k) && (j != k) && (i != j)){
                    write(1,&digiti,1);
                    write(1,&digitj,1);
                    write(1,&digitk,1);
                    write(1,&space,1);

                }
            }
        }
        

    }
}


int main(){
    ft_print_comb();

    return 0;
}