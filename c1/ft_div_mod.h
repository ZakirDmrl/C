#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_div_mod(int a, int b, int *div, int *mod){

if(b  != 0 || a != 0){
    if(a>=b){    
    *div = a/b;
    *mod = a%b;
    }
    else{
    *div = b/a;
    *mod = b%a;
    }
}
else if( a == 0 && b != 0){
    printf("Sonsuz 0/inf");
}
else if( b == 0 && a != 0){
    printf("Belirsiz a/0");
}

}