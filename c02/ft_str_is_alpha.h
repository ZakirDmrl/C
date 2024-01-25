int ft_str_is_alpha(char *str);
int ft_str_is_alpha(char *str){
    if(str == NULL){
        return 0;
    }
    while(*str != '\0'){
        if( !( ('a' <= *str && *str <= 'z') || ('A' <= *str && *str <= 'Z') )){
            return 0;
        }
        str++;
    }
    return 1;
}
