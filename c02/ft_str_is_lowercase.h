#ifndef FT_STR_IS_LOWERCASE_H
#define FT_STR_IS_LOWERCASE_H


int ft_str_is_lowercase(char *str);
int ft_str_is_lowercase(char *str){
    if(str == NULL){
        return 0;
    }

    while (*str != '\0')
    {
        if (!('a' <= *str && *str <= 'z')) {

            return 0;
        }
        str++;
    }
    return 1;
}

#endif