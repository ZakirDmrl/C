int ft_iterative_power(int nb, int power);
int ft_iterative_power(int nb, int power){
    if(power == 0 || (nb == 0 && power == 0)){
        return 1;
    }
    else{
        int result = 1;
        for(int i = 1; i<= power; i++){
            result *= nb;
        }
        return result;
    }
    return 0;
}