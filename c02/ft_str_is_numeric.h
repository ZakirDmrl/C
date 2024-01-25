int ft_str_is_numeric(char *str);
int ft_str_is_numeric(char *str){
    if(str == NULL){
        return 0;
    }
    while(*str != '\0'){
        if( !('1' <= *str && *str <= '9')){

            return 0;
        }
        str++;
    }
    return 1;


    return 0;
}