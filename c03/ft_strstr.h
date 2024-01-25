char *ft_strstr(char *str, char *to_find);
char *ft_strstr(char *str, char *to_find){
    if(*to_find == '\0'){
        return str;
    }
    while(*str != '\0'){
        char *str_ptr = str;
        char *to_find_ptr = to_find;
        while (*to_find_ptr != '\0' && *str_ptr == *to_find_ptr)
        {
            str_ptr++;
            to_find_ptr++;
        }
        if(*to_find_ptr == '\0'){
            return str;
        }
        str++;
        
    }
    return NULL;
}