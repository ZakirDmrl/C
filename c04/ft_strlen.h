#ifndef FT_STRLEN_H
#define FT_STRLEN_H
int ft_strlen(char *str);
int ft_strlen(char *str){
    int lenght = 0;
    while(*str != '\0'){
        lenght++;
        str++;
    } 
    return lenght;
}
#endif