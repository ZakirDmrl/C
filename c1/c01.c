#include "ft_ft.h"
#include "ft_ultimate_ft.h"
#include "ft_swap.h"
#include "ft_div_mod.h"
#include "ft_ultimate_div_mod.h"
#include "ft_putstr.h"
#include "ft_strlen.h"
#include "ft_rev_int_tab.h"
#include "ft_sort_int_tab.h"

#include <stdio.h>


int main(){
    int a = 9;
    int b = 2;
    // int *div = &b;
    // int *mod = &a;
    // int  *nbr = &a;
    // printf("nbr : %d\n",*nbr);

    // ft_ft(nbr);
    // printf("nbr : %d",*nbr);
    // printf("a : %d b : %d\n",a,b);
    
    // ft_swap(&a,&b);

    // printf("a : %d b : %d\n",a,b);
    // printf("div : %d mod : %d",*div,*mod);
    // ft_div_mod(a,b,div,mod);
    // printf("div : %d mod : %d",*div,*mod);
    int *a1 = &a;
    int *b1 = &b;
    ft_ultimate_div_mod(a1,b1);
    printf("a : %d b : %d\n",*a1,*b1);
    char array[13] = "Zakir Demirel";
    int iarray[] = {1,2,3,4,5,6,7,8,9};
    char *str = &array[0];
    ft_putstr(str);
    int result = ft_strlen(str);
    printf("\n%d\n",result);
    ft_rev_int_tab(&iarray[0],9);
    for(int i = 0 ; i < 9 ; i++){
        printf("%d ",iarray[i]);
    }
    printf("\n");
    ft_sort_int_tab(&iarray[0],9);
      for(int i = 0 ; i < 9 ; i++){
        printf("%d ",iarray[i]);
    }
     return 0;
}