#include <stdio.h>
#include "ft_strcmp.h"
#include "ft_strncmp.h" 
#include "ft_strcat.h"
#include "ft_strstr.h"
int main(){
    char str1[] = "Dunya";
    char str2[] = "Dunya";

    int result = ft_strcmp(str1,str2);
    if (result == 0) {
        printf("Karakter dizileri eşittir.\n");
    } else if (result < 0) {
        printf("str1, str2'den alfabetik olarak önce gelir.\n");
    } else {
        printf("str2, str1'den alfabetik olarak önce gelir.\n");
    }
    result = ft_strncmp(str1,str2,5);
    printf("%d",result);
    // char str3[25] = "Merhaba, ";
    // char str4[] = "Dunya!";

    // ft_strcat(str3, str4);
    // printf("%s\n", str3);
    char str[] = "Merhaba, Dunya!";
    char to_find[] = "Dunya";

    char *result2 = ft_strstr(str, to_find);

    if (result2 != NULL) {
        printf("Alt dizi bulundu: %s\n", result2);
    } else {
        printf("Alt dizi bulunamadi.\n");
    }


    return 0;
}