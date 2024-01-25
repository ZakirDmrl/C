#ifndef FT_IS_PRIME_H
#define FT_IS_PRIME_H
int ft_is_prime(int nb);
int ft_is_prime(int nb){
    int flag = 1;
    
    if( nb == 0 || nb == 1){
        return 0;
    }
    else if( nb == 2){
        return 1;
    }
    else{
        for(int i = 2; i< nb; i++){
            if(nb%i == 0){
                flag = 0;
                return flag;
            }

        }
    }
        return flag;
            

}
#endif