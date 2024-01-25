#ifndef FT_PUTNSTR_H
#define FT_PUTNSTR_H

void ft_putnstr(char *str, int n);
void ft_putnstr(char *str, int n) {
   for( int i = 0; i <= n; i++){
        write(1,str+i,1);
        
   }
   
}
#endif