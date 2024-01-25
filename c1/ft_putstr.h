#include <unistd.h>
#include <string.h>
void ft_putstr(char *str);
void ft_putstr(char *str){
    
    for(size_t i = 0; i < strlen(str); i++){
        char buffer = *(str+i);
        write(1,&buffer,1);
    }

}