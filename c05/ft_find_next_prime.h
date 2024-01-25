#include "ft_is_prime.h"
int ft_find_next_prime(int nb);
int ft_find_next_prime(int nb){
    int flag = ft_is_prime(nb);
    if( flag == 1){
        return nb;
    }
    else{
        int i = nb;
        while(ft_is_prime(i) != 1){
            i++;
        }
        return i;
    }
}