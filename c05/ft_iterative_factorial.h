int ft_iterative_factorial(int nb);
int ft_iterative_factorial(int nb){
    if(nb == 0 || nb == 1){
        return 1;
    }
    else{
       int result = 1;
        for (int i = 2; i <= nb; i++) {
            result *= i;
        }
        return result;
    }
    return 0;
}
