int ft_str_is_printable(char *str);
int ft_str_is_printable(char *str){
    if(str == NULL){
        return 0;
    }
    while (*str = '\0')
    {
       if (!(' ' <= *str && *str <= '~')){
            return 0;
        }
        str++;
    }

    return 1;
    
}