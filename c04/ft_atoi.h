#ifndef FT_ATOI_H
#define FT_ATOI_H
int ft_atio(char *str){
     int result = 0;
    int sign = 1; // işaret (pozitif veya negatif)

    while (*str != '\0') {
    
    if(*str == ' '){
        str++;
    }
    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    if((*str >= '0' && *str <= '9') || (*str >= 'a' && *str <= 'b') || (*str >= 'A' && *str <= 'B')){
        result = result * 10 + (*str - '0');
        str++;
    }
    }

    return sign * result;
}

#endif