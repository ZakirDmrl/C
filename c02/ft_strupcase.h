#include "ft_str_is_lowercase.h"
#include "ft_toupper.h"

// char *ft_strupcase(char *str) ;
// char *ft_strupcase(char *str) {
//     char *str_start = str;
    
//     if (str != NULL) {
//         while (*str != '\0') {
//             if (ft_str_is_lowercase(*str)) {
//                 *str = ft_toupper(*str);  
//             }
//             str++;
//         }
//     }
    
//     return str_start;
// }
#include <ctype.h> // islower ve toupper işlevlerini kullanmak için

char *ft_strupcase(char *str) {
    // char *str_start = str;
    int i = 0;
        while (*(str+i) != '\0') {
            if (islower(*str)) { // Küçük harf kontrolü
                *(str+i) = toupper(*(str+i)); // Büyük harfe çevirme
            }
            i++;
        }
    
    
    return str;
}

