int ft_strncmp(char *s1, char *s2, unsigned int n);
int ft_strncmp(char *s1, char *s2, unsigned int n){
    int flag = 0;
    for(unsigned int i = 0; i < n; i++){
        if(*(s1+i) != *(s2+i) ){
            if(*(s1+i) > *(s2+i)){
                flag = 1;
                return flag;
            }
            else{
                flag = -1;
                return flag;
            }
        }
    }
    
    return flag;
}
