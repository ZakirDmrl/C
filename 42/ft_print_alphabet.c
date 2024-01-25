#include <unistd.h>
#include <stddef.h>

void ft_print_alphabet();
void ft_print_alphabet(){
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    size_t size = sizeof(alphabet) - 1;
    for (size_t i = 0; i < size; i++){
        write(1,&alphabet[i],1);
    } 
}

int main(){
    ft_print_alphabet();
    return 0;
}