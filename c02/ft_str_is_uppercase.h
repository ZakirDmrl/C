int ft_str_is_uppercase(char *str);
int ft_str_is_uppercase(char *str){
    if(str == NULL){
        return 0;
    }

    while (*str != '\0')
    {
        if (!('A' <= *str && *str <= 'B')) {

            return 0;
        }
        str++;
    }
    return 1;
}