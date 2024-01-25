char *ft_strncpy(char *dest, char *src, unsigned int n);
char *ft_strncpy(char *dest, char *src, unsigned int n){
    char *dest_start = dest;
    for(unsigned int i = 0; i < n; i++){
        dest[i] = src[i];
    }
    return dest_start;
}