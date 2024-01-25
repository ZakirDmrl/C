#include <stdio.h>
#include <string.h>
#include "ft_strcpy.h"
#include "ft_strncpy.h"
#include "ft_str_is_alpha.h"
#include "ft_str_is_numeric.h"
#include "ft_str_is_lowercase.h"
#include "ft_str_is_uppercase.h"
#include "ft_str_is_printable.h"
#include "ft_toupper.h"
#include "ft_strupcase.h"

int main() {
    char source[] = "Merhaba, Dunya!";
    char destination[20];
    char str1[] = "Hello"; // Sadece harf içeriyor
    char str2[] = "12345"; // Sadece rakam içeriyor
    char str3[] = "hello"; // Sadece küçük harf içeriyor
    char str4[] = "HELLO"; // Sadece büyük harf içeriyor

    ft_strcpy(destination, source);
    ft_strncpy(destination,source,20);
    int result = (ft_str_is_alpha(str1));
    printf("%d\n",result);
    result = (ft_str_is_numeric(str1));
    printf("%d\n",result);
    result = (ft_str_is_lowercase(str1));
    printf("%d\n",result);
    result = (ft_str_is_lowercase(str1));
    printf("%d\n",result);
    result = (ft_str_is_alpha(str2));
    printf("%d\n",result);
    result = (ft_str_is_numeric(str2));
    printf("%d\n",result);
    result = (ft_str_is_lowercase(str2));
    printf("%d\n",result);
    result = (ft_str_is_printable(str2));
    printf("%d\n",result);
    char a = 'a';
    a = ft_toupper(a);
    printf("%c\n",a);
    char str[] = "Merhaba";
    char *ptr = ft_strupcase(str);
    if(ptr == NULL){
        printf("%s\n", ptr);
    }
    else{
        printf("ptr null");
    }

    
    return 0;
}




