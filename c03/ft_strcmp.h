int ft_strcmp(char *s1, char *s2);
int ft_strcmp(char *s1, char *s2){
    int flag = 0;
    while(*s1 != '\0' ){
        if(*s1 != *s2 ){
            if(*s1 > *s2){
                flag = 1;
                return flag;
            }
            else{
                flag = -1;
                return flag;
            }
        }
        s1++;
        s2++;
    }
    return flag;


}