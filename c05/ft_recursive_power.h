int ft_recursive_power(int nb, int power);
int ft_recursive_power(int nb, int power){
    if(power == 0 || (power == 0 && nb == 0)){
        return 1;
    }
    else{
        return nb * ft_recursive_power(nb,power-1);
    }
}