#include <unistd.h>
void ft_is_negative(int c);
void ft_is_negative(int c){
    char p = 'P';
    char n = 'N';

    if(c >= 0){
        write(1,&p,1);
    }
    else{
        write(1,&n,1);
    }
}

int main(){
    ft_is_negative(5);
    return 0;
}