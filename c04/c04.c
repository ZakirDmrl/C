#include <stdio.h>
#include "ft_strlen.h"
#include "ft_putstr.h"
#include "ft_putnstr.h"
#include "ft_atoi.h"
int main(){
char array[5] = "Hello";
int length = ft_strlen(array);
printf("%d\n",length);
ft_putstr(array);
printf("\n");
ft_putnstr(array,length);
char myString[] = "-12345a";
int result = ft_atio(myString);
printf("\nDonusturulen tam sayi: %d\n", result);


    return 0;
}