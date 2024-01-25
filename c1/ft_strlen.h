int ft_strlen(char *str);
int ft_strlen(char *str){
    char c = 'a';
    int i = 0;
    do{
        c = *(str+ i);
        i++;
    }while(c != '\0');
    return i-1;
}
