#include <stdio.h>
#include "ft_iterative_factorial.h"
#include "ft_recursive_factorial.h"
#include "ft_iterative_power.h"
#include "ft_recursive_power.h"
#include "ft_fibonacci.h"
#include "ft_sqrt.h"
#include "ft_is_prime.h"
#include "ft_find_next_prime.h"
int main(){
int i = 5;
int result = ft_iterative_factorial(i);
printf("%d\n",result);

result = ft_recursive_factorial(i);
printf("%d\n",result);

result = ft_iterative_power(i,2);
printf("%d\n",result);

result = ft_recursive_power(i,2);
printf("%d\n",result);

result = ft_fibonacci(6);
printf("%d\n",result);

result = ft_sqrt(25);
printf("%d\n",result);

result = ft_is_prime(15);
printf("%d\n",result);

result = ft_find_next_prime(14);
printf("%d\n",result);


    return 0;
}