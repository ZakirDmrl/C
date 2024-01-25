int ft_sqrt(int nb);
int ft_sqrt(int nb){
    int guess=nb;

    if( nb < 0){
        return -1;
    }
    else{
        while(guess*guess - nb > 0){
            guess =0.5*(guess+nb/guess);
        }
        }
    return guess;
}