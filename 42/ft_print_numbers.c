#include <unistd.h>

void ft_print_numbers(void);
void ft_print_numbers(void){
    int number = 9;
    for(int i = 0; i <= number; i++ ){
        char digit = i + '0';
        write(1,&digit,1);
    }
}



int main(){
ft_print_numbers();
}